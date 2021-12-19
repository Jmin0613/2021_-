package 교재9장실습문제;

import javax.swing.*;
import java.awt.*;

public class 실습문제4번 extends JFrame {
	public 실습문제4번() {
		setTitle("Ten Color Buttons Frame");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		GridLayout grid = new GridLayout(1,10);
		grid.setVgap(1);
		
		Container c = getContentPane();
		c.setLayout(grid);
		
		Color[] color = {Color.RED, Color.ORANGE, Color.YELLOW, Color.GREEN, Color.CYAN,
				Color.BLUE, Color.MAGENTA, Color.GRAY, Color.PINK, Color.LIGHT_GRAY};
		
		for(int i=0;i<10;i++) {
			String n = Integer.toString(i);
			JButton jb = (new JButton(n));
			jb.setOpaque(true);
			jb.setBackground(color[i]);
			c.add(jb);
		}
		
		setSize(1000,400);
		setVisible(true);
	}

	public static void main(String[] args) {
		new 실습문제4번();

	}

}
