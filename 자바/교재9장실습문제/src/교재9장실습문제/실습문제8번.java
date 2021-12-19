package 교재9장실습문제;

import javax.swing.*;
import java.awt.*;

//NorthPanel JButton
class NorthPanel extends JPanel {
	public NorthPanel() {
		setBackground(Color.LIGHT_GRAY);
		add(new JButton("열기"));
		add(new JButton("닫기"));
		add(new JButton("나가기"));
		setLayout(new FlowLayout());
		
	}
}

//CenterPanel, * 그려지는 캔버스
class CenterPanel extends JPanel {
	public CenterPanel() {
		setBackground(Color.WHITE);
		setLayout(null); //null로 설정, 컨텐트팬의 배치관리자 제거
		
		//랜덤 위치에 label("*") 출력
		for(int i=0;i<10;i++) {
			//랜덤위치 생성
			int x=(int)(Math.random()*200)+50;
			int y=(int)(Math.random()*200)+50;
			
			JLabel label=new JLabel("*");
			label.setLocation(x,y);
			label.setSize(10,10);
			//label.setOpaque(true);
			label.setForeground(Color.RED);
			
			add(label); //label("*")추가
		}

	}
}

//SouthPanel JTextField
class SouthPanel extends JPanel {
	public SouthPanel() {
		setBackground(Color.YELLOW);
		add(new JLabel("Word Input"));
		add(new JTextField(10)); //문자열 입력받는 창
		setLayout(new FlowLayout());
		
	}
	
}

public class 실습문제8번 extends JFrame {
	public 실습문제8번() {
		setTitle("여러 개의 패널을 가진 프레임");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //프레임 윈도우 닫으면 프로그램도 종료되도록 설정
		
		//panel추가하기
		Container c = getContentPane(); //프레임에 연결된 컨텐츠팬 알아내기
		c.add(new NorthPanel(), BorderLayout.NORTH);
		c.add(new CenterPanel(), BorderLayout.CENTER);
		c.add(new SouthPanel(), BorderLayout.SOUTH);
		
		setSize(300,300);
		setVisible(true);
	}

	public static void main(String[] args) {
		new 실습문제8번();
	}
}
