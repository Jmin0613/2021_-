package ����9��_��������;

import javax.swing.*;
import java.awt.*;

public class ����2 extends JFrame {
	
	public ����2() {
		setTitle("ContentPane�� JFrame");
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
		new ����2();

	}

}
