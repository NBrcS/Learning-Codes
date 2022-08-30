import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class FrameWithButton extends JFrame implements ActionListener {

    JButton button;
    public FrameWithButton(){
        button = new JButton();
        button.setBounds(0, 0, 300 ,200);
        button.addActionListener(this);
        button.setText("Click here!!");
        button.setFocusable(false);
        button.setHorizontalAlignment(JButton.CENTER);
        button.setVerticalAlignment(JButton.CENTER);

        ImageIcon icon = new ImageIcon("img.png");
        button.setIcon(icon);

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(null);
        this.setSize(500, 500);
        this.setVisible(true);

        this.add(button);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == button){
            System.out.println("poo");
        }
    }
}
