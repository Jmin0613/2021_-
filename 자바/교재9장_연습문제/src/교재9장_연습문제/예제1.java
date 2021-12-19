package 교재9장_연습문제;

import javax.swing.*;

public class 예제1 extends JFrame {
	
	public 예제1() {
		setTitle("300x300 스윙 프레임 만들기");
		setSize(300,300); //프레임 크기 300x300
		setVisible(true); //프레임 출력
	}

	public static void main(String[] args) {
		예제1 frame = new 예제1();

	}

}
