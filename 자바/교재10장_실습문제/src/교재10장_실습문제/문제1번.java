package ����10��_�ǽ�����;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class ����1�� extends JFrame {
	public ����1��() {
		setTitle("���콺 �ø��� ������");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container c = getContentPane();
		c.setLayout(new FlowLayout());
		
		JLabel la=new JLabel("Love Java");
	
		JLabel j=new JLabel("Love Java");
		
		j.addMouseListener(new MouseAdapter() {
			public void mouseExited(MouseEvent e) {
				// TODO Auto-generated method stub
				j.setText("�����");
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
