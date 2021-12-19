package 교재9장연습;

import javax.swing.*;
import java.awt.*;

public class ContentPaneEx extends JFrame {
	public ContentPaneEx() {
		setTitle("ContentPane과 JFrame");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //프레임 윈도우 닫으면, 프로그램 종료되도록 설정
		
		Container contentPane = getContentPane(); //컨텐트팬을 알아낸다
		contentPane.setBackground(Color.ORANGE); //색 설정
		contentPane.setLayout(new FlowLayout()); //컨텐프팬에 flowlayout배치관리자 달기
		
		//버튼달기
		contentPane.add(new JFrame("ok"));
		contentPane.add(new JButton("cancel"));
		contentPane.add(new JButton("ignore"));
		
		setSize(300,150);
		setVisible(true); //화면에 프레임 출력
	}

	public static void main(String[] args) {
		new ContentPaneEx();

	}

}
