package com.nbr.testinginterfacecomponents;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.TextView;

import com.google.android.material.textfield.TextInputEditText;

public class MainActivity extends AppCompatActivity {

    private TextView info;
    private EditText getName;
    private TextInputEditText getEmail;

    private CheckBox car1, car2, car3, car4;
    private TextView car1Stats, car2Stats, car3Stats, car4Stats;

    private RadioButton male, female;
    private RadioGroup sex;
    private String sexType;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        info = findViewById(R.id.printInfo);
        getName = findViewById(R.id.nameBox);
        getEmail = findViewById(R.id.getEmail);

        car1 = findViewById(R.id.checkCar1);
        car1Stats = findViewById(R.id.car1Stats);
        car2 = findViewById(R.id.checkCar2);
        car2Stats = findViewById(R.id.car2Stats);
        car3 = findViewById(R.id.checkCar3);
        car3Stats = findViewById(R.id.car3Stats);
        car4 = findViewById(R.id.checkCar4);
        car4Stats = findViewById(R.id.car4Stats);

        male = findViewById(R.id.Male);
        female= findViewById(R.id.Female);
        sex = findViewById(R.id.radioGroup);
        sex.setOnCheckedChangeListener(new RadioGroup.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(RadioGroup group, int checkedId) {
                if(checkedId == R.id.Male) { sexType = "male"; }
                else if(checkedId == R.id.Female) { sexType = "female"; }
            }});

        getName.setText("");
        getEmail.setText("");
    }

    public void checkbox(){

        if(car1.isChecked()){
            car1Stats.setText("Selected");
        }else car1Stats.setText("");

        if(car2.isChecked()){
            car2Stats.setText("Selected");
        }else car2Stats.setText("");

        if(car3.isChecked()){
            car3Stats.setText("Selected");
        }else car3Stats.setText("");

        if(car4.isChecked()){
            car4Stats.setText("Selected");
        }else car4Stats.setText("");
    }

    public void changeName(View view){

        String name = getName.getText().toString();
        String email = getEmail.getText().toString();

        info.setText("Name: " + name + "\nEmail: " + email + "\n" + sexType);

        checkbox();
    }
    public void cleanBoxes(View view){
        getName.setText("");
        getEmail.setText("");

        cleanCarsStats();
    }
    public void cleanCarsStats(){
        car1Stats.setText("");
        car2Stats.setText("");
        car3Stats.setText("");
        car4Stats.setText("");
    }

}
