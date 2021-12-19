package 기말고사2018;

import java.awt.*;
import javax.swing.*;

public class 문제5번 extends JFrame {
	private CirclePanel panel = new CirclePanel;
	public 문제5번() {
		//생략
		super("원을 0.5초 간격으로 이동");
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setContentPane(panel);
		setSize(300,300);
		setVisible(true);
		
	}
	
	class CirclePanel extends JPanel implements Runnable {
		private int x=100; //원 그려지는 위치
		private int y=100;
		
		public CirclePanel() {
			//MouseListener를 add하고 mouseadapter 및 mousepressed를 사용하여
			//익명클래스 형식으로 코딩
			
			Container c = getContentPane();
			Thread th = new Thread(panel);
			
			c.addMouseListener(new MouseAdapter() {
				public void mousePressed(MouseEvent e) {
					th.start();
				}
			});
		}
		
		public void paintComponenet(Graphics g) {
			//x,y좌표에 원을 그릴것
			super.paintComponents(g);
			g.setColor(Color.MAGENTA);
			int x = (int)(Math.random()*300);
			int y = (int)(Math.random()*300);
			g.drawOval(x, y, 50, 50);
		}
		
		@Override
		public void run() {
			while(true) {
				//400ms 잠을 잔 후에
				//원을 그려지는 위치를 랜덤하게 갱신
				try {
					int x = (int)(Math.random()*panel.getWidth());
	                int y = (int)(Math.random()*panel.getHeight());
	                g.drawOval(x,y,50,50);
					panel.repaint();
					Thread.sleep(400);
				}
				catch(Exception e) {
					return ;
				}
			}
		}
	}

	public static void main(String[] args) {
		//생략
	}

}
