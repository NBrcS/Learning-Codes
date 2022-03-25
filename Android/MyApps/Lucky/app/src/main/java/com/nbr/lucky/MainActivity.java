package com.nbr.lucky;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

import java.util.Random;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void Random(View view){
        TextView txt =findViewById(R.id.txt_textResult);
        txt.setText("Number: " + new Random().nextInt(101));
    }

    public  void Clean(View view){
        TextView txt = findViewById(R.id.txt_textResult);
        txt.setText("No numbers selected");
    }
}
