package com.nbr.cars;

import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    private TextView intro, result;
    private ImageView image;
    private RadioGroup choiceGroup;
    private RadioButton car1, car2, car3, car4;
    private EditText getValue;
    private double consumptionStreet, consumptionHighway;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        intro = findViewById(R.id.textIntro);
        result = findViewById(R.id.textResult);
        image = findViewById(R.id.imageCar);
        choiceGroup = findViewById(R.id.choiceGroup);
        car1 = findViewById(R.id.grt35);
        car2 = findViewById(R.id.supramk5);
        car3 = findViewById(R.id.gt3rs);
        car4 = findViewById(R.id.challenger);
        getValue = findViewById(R.id.getValue);


    }

    public Double calculateStreet(){

        String value_string;
        if(getValue.getText().toString().equals("") || getValue.getText() == null) {
            value_string = "0.0";
        }
        else{
            value_string = getValue.getText().toString();
        }
        Double walk, liters;
        Double value = Double.parseDouble(value_string);

        liters = value / 1.16;
        walk = liters / consumptionStreet;

        return walk;


    }
    public Double calculateHighway(){
        String value_string;
        if(getValue.getText().toString().equals("") || getValue.getText() == null) {
            value_string = "0.0";
        }
        else{
            value_string = getValue.getText().toString();
        }
            Double walk, liters;
            Double value = Double.parseDouble(value_string);

            liters = value / 1.16;
            walk = liters / consumptionHighway;

            return walk;


    }
    @SuppressLint("SetTextI18n")
    public void button(View view){


        if (car1.isChecked()) {
            consumptionStreet = 6.1;
            consumptionHighway = 8.2;

            intro.setText("GTR-35");
            image.setImageResource(R.drawable.gtr);
            Toast.makeText(
                    getApplicationContext(),
                    "GT - R35",
                    Toast.LENGTH_LONG
            ).show();

            result.setText("Your car will do " + calculateStreet() + "on street\n" +
                            "Your car will do" + calculateHighway() + "on Highway\n");
        }

        else if (car2.isChecked()) {
            consumptionStreet = 6.0;
            consumptionHighway = 8.0;

            intro.setText("Supra MK-5");
            image.setImageResource(R.drawable.mk5);
            Toast.makeText(
                    getApplicationContext(),
                    "Supra - MK5",
                    Toast.LENGTH_LONG
            ).show();

            result.setText("Your car will do " + calculateStreet() + "on street\n" +
                    "Your car will do" + calculateHighway() + "on Highway\n");
        }
        else if (car3.isChecked()) {
            consumptionStreet = 7.5;
            consumptionHighway = 8.0;

            intro.setText("GT3-RS");
            image.setImageResource(R.drawable.gt3);
            Toast.makeText(
                    getApplicationContext(),
                    "GT3 - RS",
                    Toast.LENGTH_LONG
            ).show();

            result.setText("Your car will do " + calculateStreet() + "on street\n" +
                    "Your car will do" + calculateHighway() + "on Highway\n");
        } else if (car4.isChecked()) {
            consumptionStreet = 4.0;
            consumptionHighway = 5.4;

            intro.setText("Challenger");
            image.setImageResource(R.drawable.challenger);
            Toast.makeText(
                    getApplicationContext(),
                    "Challenger",
                    Toast.LENGTH_LONG
            ).show();

            result.setText("Your car will do " + calculateStreet() + "on street\n" +
                    "Your car will do" + calculateHighway() + "on Highway\n");
        }
        else {
            result.setText("Waiting...");
        }

    }

}