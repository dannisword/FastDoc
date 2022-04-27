package com.changingtec.fastdoc.sample;

import android.Manifest;
import android.app.AlertDialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.graphics.Bitmap;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.RadioButton;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;

import com.changingtec.exception.CGError;
import com.changingtec.fastdocsdk.DocCallback;
import com.changingtec.fastdocsdk.FastDocSdk;
import com.changingtec.fastdocsdk.model.DocConfig;
import com.changingtec.fastdocsdk.model.DocImage;
import com.changingtec.fastdocsdk.model.DocOrientation;
import com.changingtec.fastdocsdk.model.DocType;

public class MainActivity extends AppCompatActivity implements DocCallback {
    private static final int CAMERA_REQUEST_CODE = 1;
    private DocConfig config;
    private RadioButton normal, custom;
    private boolean isNormalUi = true;
    private Button uniformInvoice25, uniformInvoice22, taiwanRailwayTicketS, taiwanRailwayTicketH, thsrTicket;
    private AlertDialog messageDialog;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        checkCameraPermission();
        initConfig();
        initUi();
    }

    private void initConfig() {
        config = new DocConfig();
        config.type = DocType.UniformInvoiceFormat25;
        config.orientation = DocOrientation.Landscape;
        config.borderColor = "#ff0000";
    }

    private void initUi() {
        normal = findViewById(R.id.normal_radioButton);
        normal.performClick();
        normal.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                isNormalUi = true;
            }
        });
        custom = findViewById(R.id.custom_radioButton);
        custom.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                isNormalUi = false;
            }
        });
        uniformInvoice25 = findViewById(R.id.uniform_invoice_25_button);
        uniformInvoice25.setOnClickListener((new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                config.type = DocType.UniformInvoiceFormat25;
                config.orientation = DocOrientation.Portrait;
                startSdk();
            }
        }));
        uniformInvoice22 = findViewById(R.id.uniform_invoice_22_button);
        uniformInvoice22.setOnClickListener((new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                config.type = DocType.UniformInvoiceFormat22;
                config.orientation = DocOrientation.Portrait;
                startSdk();
            }
        }));
        taiwanRailwayTicketS = findViewById(R.id.taiwan_railway_ticketS_button);
        taiwanRailwayTicketS.setOnClickListener((new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                config.type = DocType.TaiwanRailwayTicketS;
                config.orientation = DocOrientation.Portrait;
                startSdk();
            }
        }));
        taiwanRailwayTicketH = findViewById(R.id.taiwan_railway_ticketH_button);
        taiwanRailwayTicketH.setOnClickListener((new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                config.type = DocType.TaiwanRailwayTicketH;
                config.orientation = DocOrientation.Landscape;
                startSdk();
            }
        }));
        thsrTicket = findViewById(R.id.thsr_ticket_button);
        thsrTicket.setOnClickListener((new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                config.type = DocType.THSRTicket;
                config.orientation = DocOrientation.Landscape;
                startSdk();
            }
        }));
    }

    private void startSdk() {
        if (isNormalUi) {
            startNormalUi();
        } else {
            startCustomUi();
        }
    }

    public void startNormalUi() {
        int result;
        result = FastDocSdk.getInstance().initial(this);
        if (result != CGError.CG_SUCCESS) {
            return;
        }
        FastDocSdk.getInstance().readConfig(config);
        result = FastDocSdk.getInstance().start(this, this);
    }

    public void startCustomUi() {
        int result;
        result = FastDocSdk.getInstance().initial(this);
        if (result != CGError.CG_SUCCESS) {
            return;
        }
        FastDocSdk.getInstance().readConfig(config);
        result = FastDocSdk.getInstance().start(this,
                CustomNormalCameraActivity.class,
                this);
    }

    private void transferToResultActivity(Bitmap result) {
        ResultActivity.bitmap = result;
        Intent intent = new Intent(this, ResultActivity.class);
        startActivity(intent);
    }

    private void checkCameraPermission() {
        if (ContextCompat.checkSelfPermission(this, Manifest.permission.CAMERA) != PackageManager.PERMISSION_GRANTED) {
            ActivityCompat.requestPermissions(this, new String[]{Manifest.permission.CAMERA}, CAMERA_REQUEST_CODE);
        }
    }

    @Override
    public void onRequestPermissionsResult(int requestCode, @NonNull String[] permissions, @NonNull int[] grantResults) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults);
        if (requestCode == CAMERA_REQUEST_CODE) {
            if (grantResults[0] != PackageManager.PERMISSION_GRANTED) {
                checkCameraPermission();
            }
        }
    }

    private void showDialog(String message) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setCancelable(false);
        builder.setMessage(message)
                .setPositiveButton("確定", (dialog, which) -> {

                });
        messageDialog = builder.create();
        if (!isFinishing()) {
            messageDialog.show();
        }
    }

    @Override
    public void cancel() {
        showDialog("使用者取消");
    }

    @Override
    public void takePhoto(DocImage docImage) {
        if (docImage != null && docImage.image != null) {
            transferToResultActivity(docImage.image);
        }
    }
}