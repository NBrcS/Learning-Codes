package com.nbr.myapplication;

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
        result("Stone");
    }
    public void choicePaper(View view){
        result("Paper");
    }
    public void choiceScissor(View view){
        result("Scissor");
    }

    public void result(String userChoice){
        ImageView appImage = findViewById(R.id.im_appChoice);
        TextView textResult = findViewById(R.id.txt_textResult);

        int rand = new Random().nextInt(3);
        String[] options = {"Stone", "Paper", "Scissor"};
        String appChoice = options[rand];

        switch ( rand ){
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
            textResult.setText("You lose, sorry! :(");
        }else if(
                (userChoice == "Stone" && appChoice == "Scissor") ||
                (userChoice == "Scissor" && appChoice == "Paper") ||
                (userChoice == "Paper" && appChoice == "Stone")
        ){
            textResult.setText("You win, congrats!! :)");
        }else{
            textResult.setText("You two tied, try again!! :|");
        }
    }
}
