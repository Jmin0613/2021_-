package �⸻���2019;

import java.awt.*;
import javax.swing.*;

public class ����1�� extends JFrame {
	public ����1��() {
		setTitle("����1��_border Layout");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Container c = getContentPane();
		c.setLayout(new BorderLayout());
		
		c.add(new JButton("center"), BorderLayout.CENTER);
		c.add(new JButton("north"), BorderLayout.NORTH);
		c.add(new JButton("south"), BorderLayout.SOUTH);
		c.add(new JButton("east"), BorderLayout.EAST);
		c.add(new JButton("west"), BorderLayout.WEST);
		
		setSize(300,300);
		setVisible(true);
	}

	public static void main(String[] args) {
		new ����1��();

	}

}
