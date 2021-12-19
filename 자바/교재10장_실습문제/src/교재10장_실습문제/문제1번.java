package 교재10장_실습문제;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class 문제1번 extends JFrame {
	public 문제1번() {
		setTitle("마우스 올리기 내리기");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		
		JLabel la=new JLabel("Love Java");
	
		JLabel j=new JLabel("Love Java");
		
		j.addMouseListener(new MouseAdapter() {
			public void mouseExited(MouseEvent e) {
				// TODO Auto-generated method stub
				j.setText("사랑해");
			}
			public void mouseEntered(MouseEvent e) {
				// TODO Auto-generated method stub
				j.setText("Love Java");
			}
		});
		
		c.add(j);
		
		setSize(250,250);
		setVisible(true);
	}

	public static void main(String[] args) {
		

	}

}
