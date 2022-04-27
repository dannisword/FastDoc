package com.changingtec.fastdoc.sample;

import android.graphics.Color;
import android.os.Bundle;
import android.widget.TextView;

import com.changingtec.fastdocsdk.NormalDocActivity;

public class CustomNormalCameraActivity extends NormalDocActivity {
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        TextView title = findViewById(com.changingtec.fastdocsdk.R.id.fast_doc_title_textView);
        title.setTextColor(Color.RED);
        TextView hint = findViewById(com.changingtec.fastdocsdk.R.id.fast_doc_hint_textView);
        hint.setTextColor(Color.BLUE);
    }
}
