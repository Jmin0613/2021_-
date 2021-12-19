package 기말고사2019;

import java.awt.*;
import javax.swing.*;

public class 문제1_2 extends JFrame {
	public 문제1_2() {
		setTitle("문제1번_grid Layout");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		GridLayout grid = new GridLayout(2,2);
		grid.setVgap(5);
		
		Container c = getContentPane();
		c.setLayout(grid);
		
		c.add(new JLabel("1"));
		c.add(new JLabel("2"));
		c.add(new JLabel("3"));
		c.add(new JLabel("4"));
		
		
		setSize(100,100);
		setVisible(true);
	}

	public static void main(String[] args) {
		new 문제1_2();

	}

}
