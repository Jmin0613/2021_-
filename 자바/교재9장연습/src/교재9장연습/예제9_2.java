package ����9�忬��;

import javax.swing.*;
import java.awt.*;

public class ����9_2 extends JFrame{
	public ����9_2() {
		setTitle("ContentPane�� JFrame");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //������ ������ ������, ���α׷� ����ǵ��� ����
		
		Container contentPane = getContentPane(); //����Ʈ���� �˾Ƴ���
		contentPane.setBackground(Color.ORANGE); //�� ����
		contentPane.setLayout(new FlowLayout()); //�������ҿ� flowlayout��ġ������ �ޱ�
		
		//��ư�ޱ�
		contentPane.add(new JFrame("ok"));
		contentPane.add(new JButton("cancel"));
		contentPane.add(new JButton("ignore"));
		
		setSize(300,150);
		setVisible(true); //ȭ�鿡 ������ ���
	}

	public static void main(String[] args) {
		����9_2 ���� = new ����9_2();

	}

}
