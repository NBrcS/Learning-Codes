package com.nbr.joken_po;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;

import java.util.Random;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void choiceStone(View view){
        this.result("Stone");
    }
    public void choicePaper(View view){
        this.result("Paper");
    }
    public void choiceScissor(View view){
        this.result("Scissor");
    }


    public void result(String userChoice){
        ImageView appImage = findViewById(R.id.im_appChoice);
        TextView textResult = findViewById(R.id.txt_textResult);

        Random random = new Random();
        String[] options = {"Stone", "Paper", "Scissor"};
        int randomChoice = random.nextInt(3);
        String appChoice = options[randomChoice];

        switch ( randomChoice ){
            case 0:
                appImage.setImageResource(R.drawable.pedra);
                break;
            case 1:
                appImage.setImageResource(R.drawable.papel);
                break;
            case 2:
                appImage.setImageResource(R.drawable.tesoura);
                break;
        }

        if(
            (appChoice == "Stone" && userChoice == "Scissor") ||
            (appChoice == "Scissor" && userChoice == "Paper") ||
            (appChoice == "Paper" && userChoice == "Stone")
        ){
            textResult.setText("You lose! Sorry :(");
        }else if(
            (userChoice == "Stone" && appChoice == "Scissor") ||
            (userChoice == "Scissor" && appChoice == "Paper") ||
            (userChoice == "Paper" && appChoice == "Stone")
        ){
            textResult.setText("You win! Congratulations :)");
        }else{
            textResult.setText("you two tied");
        }
    }
}
