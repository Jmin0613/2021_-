package 교재9장_실습문제_다시풀기;

import javax.swing.*;
import java.awt.*;

public class 문제6 extends JFrame {
	public 문제6() {
		setTitle("Random Labels");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Container c = getContentPane();
		c.setLayout(null);
		
		for(int i=0;i<20;i++) {
			int x=(int)(Math.random()*200)+50;
			int y=(int)(Math.random()*200)+50;
			
			JLabel label=new JLabel();
			label.setLocation(x,y);
			label.setSize(10,10);
			label.setOpaque(true);
			label.setBackground(Color.BLUE);
			
			c.add(label);
		}
		
		setSize(300,300);
		setVisible(true);
	}

	public static void main(String[] args) {
		new 문제6();

	}

}
