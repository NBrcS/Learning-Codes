import javax.sound.sampled.*;
import java.io.File;
import java.io.IOException;
import java.util.Scanner;

public class main {
    public static <string> void main(String[] args) throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File("audio.wav");
        Scanner scan = new Scanner(System.in);

        if(!file.exists()){
            System.out.println("not exists");
        }
        AudioInputStream audio = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audio);

        clip.start();

        String response = "";
        while(response != "Q\n"){
            System.out.println("Type:\n" +
                                "Q to quit\n" +
                                "P to pause\n" +
                                "R to reset\n" +
                                "C to continue");
            System.out.printf("\nchoice: ");

            response = scan.next();
            response = response.toUpperCase();

            switch (response){
                case "Q":
                    return;

                case "P":
                    clip.stop();
                    break;

                case "R":
                    clip.setMicrosecondPosition(0);
                    clip.start();
                    break;

                case "C":
                    clip.start();
                    break;

                default:
                    System.out.println(response + " isn`t an option\n\n");
                    break;
            }
        }
    }
}
