package ����10��_����;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class �͸�Ŭ������_action�̺�Ʈ������ extends JFrame {
	public �͸�Ŭ������_action�̺�Ʈ������() {
		setTitle("Action �̺�Ʈ ������ ����");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container  c=getContentPane();
		c.setLayout(new FlowLayout());
		JButton btn = new JButton("Action");
		c.add(btn);
		
		btn.addActionListener(new ActionListener() {
			public void actionPerfomed(ActionEvent e) {
				JButton b =(JButton)e.getSource();
				
				if(b.getText().equals("Action"))
					b.setText("�׼�");
				else
					b.setText("Action");
			}
		});
		
		setSize(350,150);
		setVisible(true);
	}

	public static void main(String[] args) {
		new �͸�Ŭ������_action�̺�Ʈ������();

	}

}
