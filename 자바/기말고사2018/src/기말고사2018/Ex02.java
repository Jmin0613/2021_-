package 기말고사2018;
import java.awt.Color;
import java.awt.Container;
import java.awt.Graphics;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.util.Scanner;
 
import javax.swing.JFrame;
import javax.swing.JPanel;
 
class MyPanel extends JPanel{
	public void paintComponent(Graphics g) {
		super.paintComponent(g);
		g.setColor(Color.magenta);
		int x=(int)(Math.random()*300);
		int y=(int)(Math.random()*300);
		g.drawOval(x, y, 50, 50);
	}
}
 
class myThread extends Thread{
	MyPanel jp;
	public myThread(MyPanel j) {
		jp=j;
	}
	public void run() {
		while(true) {
			try {
				sleep(500);
				jp.repaint();
			} catch (Exception e) {
				return;
			}
		}
	}
}
 
class myFrame extends JFrame{
	MyPanel myp=new MyPanel();
	myThread th=new myThread(myp);
	public myFrame() {
		setTitle("원을 0.5초 간격으로 이동하는 frame");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		setContentPane(myp);
		myp.setLayout(null);
		myp.setOpaque(true);
		myp.addMouseListener(new MouseAdapter() {
			public void mouseClicked(MouseEvent e) {
				th.start();
			}
		});
		
		
		setVisible(true);
		setSize(500,500);
	}
}
 
public class Ex02 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new myFrame();
	}
}