package com.nbr.testinginterfacecomponents;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Switch;
import android.widget.TextView;
import android.widget.Toast;
import android.widget.ToggleButton;

import com.google.android.material.textfield.TextInputEditText;

public class MainActivity extends AppCompatActivity {

    private TextView info, sexTypeText;
    private EditText getName;
    private TextInputEditText getEmail;

    private CheckBox car1, car2, car3, car4;
    private TextView car1Stats, car2Stats, car3Stats, car4Stats;

    private RadioGroup sex;

    private ToggleButton toggle;
    private TextView toggleStats;
    private Switch switcher;
    private TextView switcherStats;


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

        sex = findViewById(R.id.radioGroup);
        sexTypeText = findViewById(R.id.thisSex);
        radio();

        toggle = findViewById(R.id.toggleButton);
        toggleStats = findViewById(R.id.toggleStat);
        switcher = findViewById(R.id.switch1);
        switcherStats = findViewById(R.id.switchStat);

        switcher.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton compoundButton, boolean b) {
                if( b ){
                    switcherStats.setText("on");
                }
                else{
                    switcherStats.setText("off");
                }
            }
        });
        toggle.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton compoundButton, boolean b) {
                if( b ){
                    toggleStats.setText("on");
                }
                else{
                    toggleStats.setText("off");
                }
            }
        });

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

    public void radio(){
        sex.setOnCheckedChangeListener(new RadioGroup.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(RadioGroup group, int checkedId) {
                if(checkedId == R.id.Male) { sexTypeText.setText("male"); }
                else if(checkedId == R.id.Female) { sexTypeText.setText("female"); }
            }});
    }

    public void changeName(View view){

        String name = getName.getText().toString();
        String email = getEmail.getText().toString();
        String text ="Name: " + name + "\nEmail: " + email + "\n";

        info.setText(text);

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
    public void callToast(View view){
        ImageView image = new ImageView( getApplicationContext() );
        image.setImageResource( android.R.drawable.alert_dark_frame);

        Toast toast = new Toast( getApplicationContext() );
        toast.setDuration(Toast.LENGTH_LONG);
        toast.setView( image );
        toast.show();

        //Toast.makeText(this, "seeloko chamei a torrada", Toast.LENGTH_SHORT).show();
    }

}
