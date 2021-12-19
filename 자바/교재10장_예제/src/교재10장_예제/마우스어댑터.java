package 교재10장_예제;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class 마우스어댑터 extends JFrame {
	private JLabel la = new JLabel("hello");
	
	public 마우스어댑터() {
		setTitle("mouse 이벤트 예제");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.addMouseListener(new MyMouseAdapter());
		
		c.setLayout(null);
		la.setSize(50,20);
		la.setLocation(30,30);
		c.add(la);
		
		setSize(250,250);
		setVisible(true);
	}
	
	public void MyMouseAdapter extends MouseAdapter {
		public void mousePredded(MouseEvent e) {
			int x=e.getX();
			int y=e.getY();
			la.setLocation(x,y);
		}
	}

	public static void main(String[] args) {
		

	}

}
