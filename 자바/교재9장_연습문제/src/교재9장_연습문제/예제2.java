package 교재9장_연습문제;

import javax.swing.*;
import java.awt.*;

public class 예제2 extends JFrame {
	
	public 예제2() {
		setTitle("ContentPane과 JFrame");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Container contentPane = getContentPane();
		contentPane.setBackground(Color.ORANGE);
		contentPane.setLayout(new FlowLayout());
		
		contentPane.add(new JButton("ok"));
		contentPane.add(new JButton("cancel"));
		contentPane.add(new JButton("ignore"));
		
		setSize(300,150);
		setVisible(true);
	}

	public static void main(String[] args) {
		new 예제2();

	}

}
