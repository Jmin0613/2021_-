package ����10��_����;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class ���콺����� extends JFrame {
	private JLabel la = new JLabel("hello");
	
	public ���콺�����() {
		setTitle("mouse �̺�Ʈ ����");
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
