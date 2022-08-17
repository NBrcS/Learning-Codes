import javax.swing.*;
import java.awt.*;

public class MyFrame extends JFrame {
    MyFrame(){
        // Set Title of frame
        this.setTitle("A new frame");

        // Exit out of app
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Set dimensions
        this.setSize(640, 480);

        // Prevent frame from being resize
        this.setResizable(false);

        // Makes frame visible
        this.setVisible(true);

        // Create and set an icon
        ImageIcon icon = new ImageIcon("icon.png");
        this.setIconImage(icon.getImage());

        // Change the background color
        // I can use still a new Color(R, G, B) with RGB color Numbers
        this.getContentPane().setBackground(Color.DARK_GRAY);
    }

    public void createLabels(){

        // Create a label
        JLabel label = new JLabel();

        //Set the label text
        label.setText("A text for a label");

        // Add the label to the frame
        this.add(label);

    }
}
