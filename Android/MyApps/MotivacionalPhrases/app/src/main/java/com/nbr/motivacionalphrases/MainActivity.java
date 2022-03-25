package com.nbr.motivacionalphrases;

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

    public void changeText(View view){
        String[] str = {"O êxito é fácil de obter. O difícil é merecê-lo",
                        "O sucesso nasce do querer, da determinação e persistência em se chegar a um objetivo. Mesmo não atingindo o alvo, quem busca e vence obstáculos, no mínimo fará coisas admiráveis.",
                        "Quando eu me atrevo a ser poderoso - para usar minha força no serviço da minha visão, então torna-se cada vez menos importante se eu tenho medo.",
                        "Quer você acredite que consiga fazer uma coisa ou não, você está certo.",
                        "Inteligência é a capacidade de se adaptar à mudança.",
                        "A fortuna fica ao lado daquele que ousa.",
                        "Apenas quando a lagarta pensava que o mundo estava acabando, ele se transformou em uma borboleta.",
                        "Não levante sua voz, melhore seu argumento.",
                        "Deus, ao criar o homem, superestimou a Sua capacidade.",
                        "Aqueles que são loucos o suficiente para pensar que podem mudar o mundo são os que o fazem."};

        TextView text = findViewById(R.id.txt_textPhrase);
        text.setText(str[new Random().nextInt(10)]);
    }









}
