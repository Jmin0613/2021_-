package �⸻���2018;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

import javax.swing.*;

public class ����5 extends JFrame {
	private CirclePanel panel = new CirclePanel();
	public ����5() {
		//����
		setTitle("���� 0.5�� �������� �̵�");
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setContentPane(panel);
		setSize(500,500);
		setVisible(true);
	}
	
	class CirclePanel extends JPanel implements Runnable {
		private int x=100; //�� �׷����� ��ġ
		private int y=100;
		
		public CirclePanel() {
			//MouseListener�� add�ϰ� mouseadapter �� mousepressed�� ����Ͽ�
			//�͸�Ŭ���� �������� �ڵ�
			
			Container c = getContentPane();
			Thread th = new Thread(panel);
			
			c.addMouseListener(new MouseAdapter() {
				public void mousePressed(MouseEvent e) {
					th.start();
				}
			});
			
			

		}
		
		public void paintComponenet(Graphics g) {
			//x,y��ǥ�� ���� �׸���
			super.paintComponents(g);
			g.setColor(Color.MAGENTA);
			int x = (int)(Math.random()*300);
			int y = (int)(Math.random()*300);
			g.drawOval(x, y, 50, 50);
		}
		
		@Override
		public void run() {
			while(true) {
				//400ms ���� �� �Ŀ�
				//���� �׷����� ��ġ�� �����ϰ� ����
				try {
					int x = (int)(Math.random()*panel.getWidth());
	                int y = (int)(Math.random()*panel.getHeight());
	                g.drawOval(x,y,50,50);
					panel.repaint();
					th.sleep(400);
				}
				catch(InterruptedException e) {
					return ;
				}
			}
		}
	}

	public static void main(String[] args) {
		new ����5();
	}

}
