package �⸻���2018;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class ����2�� extends JFrame {
	public ����2��() {
		setTitle("����2��");
		setLayout(new FlowLayout());
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		//��ư ������Ʈ�� �����ϰ� ������ ��������� �ְ� MouseListenr�� �ܴ�
		Container c =getContentPane();
		c.setBackground(Color.YELLOW);
		//c.addMouseListener(new MyMouseListener());
		
		JButton btn = new JButton("��ư�� Mouse �̺�Ʈ ������ �ۼ�");
		
		//�͸�Ŭ���� �������� MousesAdapter�� �̿��Ͽ� �ʿ��� �żҵ常 �ۼ��ϴܴ�
		btn.addMouseListener(new MouseAdapter() {
			public void mouseClicked(MouseEvent e) {}
			public void mouseEntered(MouseEvent e) {
				Component cp =(Component)e.getSource();
				c.setBackground(Color.RED);
			}
			public void mouseExited(MouseEvent e) {
				Component cp =(Component)e.getSource();
				c.setBackground(Color.YELLOW);
			}
				
			
		});
		
		c.add(btn);
		setSize(300,150);
		setVisible(true);
		
	}

	public static void main(String[] args) {
		new ����2��();

	}

}
