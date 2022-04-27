package com.changingtec.fastdoc.sample;

import androidx.appcompat.app.AppCompatActivity;

import android.graphics.Bitmap;
import android.os.Bundle;
import android.widget.ImageView;

public class ResultActivity extends AppCompatActivity {
    static Bitmap bitmap;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_result);
        initUi();
    }

    private void initUi() {
        setResultImage();
    }

    private void setResultImage() {
        if (bitmap != null) {
            ImageView iv = findViewById(R.id.resultImageView);
            iv.setImageBitmap(bitmap);
        }
    }
}