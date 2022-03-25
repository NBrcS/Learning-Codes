package com.nbr.calculatorx;

import androidx.appcompat.app.AppCompatActivity;

import android.hardware.camera2.MultiResolutionImageReader;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.TextView;

import net.objecthunter.exp4j.Expression;
import net.objecthunter.exp4j.ExpressionBuilder;

import java.nio.charset.CharsetEncoder;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {

    private Button Zero, One, Two, Three, Four, Five, Six, Seven, Eight, Nine,
            Multiplication, Division, Sum, Sub, Point, Equal, Clear;

    private TextView txtExpression, txtResult;
    private ImageView BackSpace;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        InitComponents();
        getSupportActionBar().hide();

        Zero.setOnClickListener(this);
        One.setOnClickListener(this);
        Two.setOnClickListener(this);
        Three.setOnClickListener(this);
        Four.setOnClickListener(this);
        Five.setOnClickListener(this);
        Six.setOnClickListener(this);
        Seven.setOnClickListener(this);
        Eight.setOnClickListener(this);
        Nine.setOnClickListener(this);
        Point.setOnClickListener(this);
        Multiplication.setOnClickListener(this);
        Division.setOnClickListener(this);
        Sub.setOnClickListener(this);
        Sum.setOnClickListener(this);

        Clear.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {

                txtExpression.setText("");
                txtResult.setText("");
            }
        });

        BackSpace.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {

                TextView expression = findViewById(R.id.txt_expression);
                String str = expression.getText().toString();

                if(!str.isEmpty()){
                    byte var0 = 0;
                    int var1 = str.length() - 1;
                    String txtExpression = str.substring(var0, var1);
                    expression.setText(txtExpression);
                }
                txtResult.setText("");
            }
        });

        Equal.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                try{
                    Expression expression = new ExpressionBuilder(txtExpression.getText().toString()).build();
                    double result = expression.evaluate();
                    long longResult = (long)result;

                    if(result == (double)longResult){
                        txtResult.setText((CharSequence) String.valueOf(longResult));
                    }
                    else{
                        txtResult.setText((CharSequence) String.valueOf(result));
                    }
                }catch(Exception e){

                }

            }
        });
    }



    private void InitComponents(){
        Zero = findViewById(R.id.bt_ZeroButton);
        One = findViewById(R.id.bt_OneButton);
        Two = findViewById(R.id.bt_TwoButton);
        Three = findViewById(R.id.bt_ThreeButton);
        Four = findViewById(R.id.bt_FourButton);
        Five = findViewById(R.id.bt_FiveButton);
        Six = findViewById(R.id.bt_SixButton);
        Seven = findViewById(R.id.bt_SevenButton);
        Eight = findViewById(R.id.bt_EightButton);
        Nine = findViewById(R.id.bt_NineButton);
        Multiplication = findViewById(R.id.bt_MultiplicationButton);
        Division = findViewById(R.id.bt_Division);
        Sum = findViewById(R.id.bt_SumButton);
        Sub = findViewById(R.id.bt_SubButton);
        Point = findViewById(R.id.bt_PointButton);
        Equal = findViewById(R.id.bt_EqualButton);
        Clear = findViewById(R.id.bt_ClearButton);
        BackSpace = findViewById(R.id.BackSpaceButton);
        txtExpression = findViewById(R.id.txt_expression);
        txtResult = findViewById(R.id.txt_result);
    }

    public void addExpression(String str, boolean clearData){
        if(txtResult.getText().equals("")){
            txtExpression.setText(" ");
        }
        if(clearData){
            txtResult.setText(" ");
            txtExpression.append(str);
        }else{
            txtExpression.append(txtResult.getText());
            txtExpression.append(str);
            txtResult.setText(" ");
        }
    }

    @Override
    public void onClick(View view) {
        switch(view.getId()) {
            case R.id.bt_ZeroButton:
                addExpression("0", true);
                break;
            case R.id.bt_OneButton:
                addExpression("1", true);
                break;
            case R.id.bt_TwoButton:
                addExpression("2", true);
                break;
            case R.id.bt_ThreeButton:Button:
                addExpression("3", true);
                break;
            case R.id.bt_FourButton:Button:
                addExpression("4", true);
                break;
            case R.id.bt_FiveButton:
                addExpression("5", true);
                break;
            case R.id.bt_SixButton:
                addExpression("6", true);
                break;
            case R.id.bt_SevenButton:
                addExpression("7", true);
                break;
            case R.id.bt_EightButton:
                addExpression("8", true);
                break;
            case R.id.bt_NineButton:
                addExpression("9", true);
                break;
            case R.id.bt_MultiplicationButton:
                addExpression("*", false);
                break;
            case R.id.bt_Division:
                addExpression("/", false);
                break;
            case R.id.bt_SumButton:
                addExpression("+", false);
                break;
            case R.id.bt_SubButton:
                addExpression("-", false);
                break;
            case R.id.bt_PointButton:
                addExpression(".", false);
                break;
        }
    }
}