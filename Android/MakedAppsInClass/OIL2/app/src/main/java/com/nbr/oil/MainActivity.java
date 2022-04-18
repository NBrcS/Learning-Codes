package com.nbr.oil;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

import com.google.android.material.textfield.TextInputEditText;

public class MainActivity extends AppCompatActivity {

    private TextInputEditText gas ;
    private TextInputEditText oil ;
    private TextView result ;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        gas = findViewById(R.id.gas);
        oil = findViewById(R.id.oil);
        result = findViewById(R.id.textView);
    }

    public void calculate(View view){
        String sGas = gas.getText().toString();
        String sOil = oil.getText().toString();

        if(validate(sGas, sOil)) {
            Double gasValue = Double.parseDouble(sGas);
            Double oilValue = Double.parseDouble(sOil);

            if (oilValue / gasValue >= 0.7) result.setText("Melhor a gasosa");
            else result.setText("vamo de álcool mrm");
        }
        else result.setText("Preenche os campo ai na humilda");
    }
    public boolean validate(String sGas, String sOil){
        boolean validated = true;

        if(sGas == null || sGas.equals("")) validated = false;
        else if(sOil == null || sOil.equals("")) validated = false;

        return validated;
    }
}