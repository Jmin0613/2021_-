package ����9��ǽ�����;

import javax.swing.*;
import java.awt.*;

public class �ǽ�����3�� extends JFrame {
	public �ǽ�����3��() {
		setTitle("Ten Color Buttons Frame");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		GridLayout grid = new GridLayout(1,10);
		grid.setVgap(1);
		
		Container c = getContentPane();
		c.setLayout(grid);
		
		for(int i=0;i<10;i++) {
			String n = Integer.toString(i);
			c.add(new JButton(n));
		}
		
		setSize(1000,400);
		setVisible(true);
	}

	public static void main(String[] args) {
		new �ǽ�����3��();

	}

}
