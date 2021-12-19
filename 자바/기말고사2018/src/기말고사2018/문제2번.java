package 기말고사2018;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class 문제2번 extends JFrame {
	public 문제2번() {
		setTitle("문제2번");
		setLayout(new FlowLayout());
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		//버튼 컴포넌트를 생성하고 배경색을 노란새으로 주고 MouseListenr를 단다
		Container c =getContentPane();
		c.setBackground(Color.YELLOW);
		//c.addMouseListener(new MyMouseListener());
		
		JButton btn = new JButton("버튼에 Mouse 이벤트 리스너 작성");
		
		//익명클래스 형식으로 MousesAdapter를 이용하여 필요한 매소드만 작성하단다
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
		new 문제2번();

	}

}
