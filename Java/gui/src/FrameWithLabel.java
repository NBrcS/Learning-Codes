import javax.swing.*;
import javax.swing.border.Border;
import java.awt.*;

public class FrameWithLabel extends JFrame{
    public FrameWithLabel(){

        ImageIcon icon = new ImageIcon("img.png");
        JLabel label = new JLabel();
        Border border = BorderFactory.createLineBorder(Color.black);

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(350, 400);
        this.setVisible(true);

        // Set a label text
        label.setText("Are you fine, bro?");

        // Add a image under the label
        label.setIcon(icon);

        // Adjust the text position on the label
        label.setHorizontalTextPosition(JLabel.CENTER);
        label.setVerticalTextPosition(JLabel.TOP);

        //Change the text color and font
        label.setForeground(Color.BLACK);
        label.setFont(new Font("MV Boli", Font.PLAIN, 20));

        // Set gap for the image
        label.setIconTextGap(-25);

        // Set and display background color
        label.setBackground(Color.lightGray);
        label.setOpaque(true);

        // Set the border
        label.setBorder(border);

        // Set the position of all on the label
        label.setVerticalAlignment(JLabel.CENTER);
        label.setHorizontalAlignment(JLabel.CENTER);

        this.add(label);
        this.pack();
    }
}
