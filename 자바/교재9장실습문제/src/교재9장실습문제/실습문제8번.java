package ����9��ǽ�����;

import javax.swing.*;
import java.awt.*;

//NorthPanel JButton
class NorthPanel extends JPanel {
	public NorthPanel() {
		setBackground(Color.LIGHT_GRAY);
		add(new JButton("����"));
		add(new JButton("�ݱ�"));
		add(new JButton("������"));
		setLayout(new FlowLayout());
		
	}
}

//CenterPanel, * �׷����� ĵ����
class CenterPanel extends JPanel {
	public CenterPanel() {
		setBackground(Color.WHITE);
		setLayout(null); //null�� ����, ����Ʈ���� ��ġ������ ����
		
		//���� ��ġ�� label("*") ���
		for(int i=0;i<10;i++) {
			//������ġ ����
			int x=(int)(Math.random()*200)+50;
			int y=(int)(Math.random()*200)+50;
			
			JLabel label=new JLabel("*");
			label.setLocation(x,y);
			label.setSize(10,10);
			//label.setOpaque(true);
			label.setForeground(Color.RED);
			
			add(label); //label("*")�߰�
		}

	}
}

//SouthPanel JTextField
class SouthPanel extends JPanel {
	public SouthPanel() {
		setBackground(Color.YELLOW);
		add(new JLabel("Word Input"));
		add(new JTextField(10)); //���ڿ� �Է¹޴� â
		setLayout(new FlowLayout());
		
	}
	
}

public class �ǽ�����8�� extends JFrame {
	public �ǽ�����8��() {
		setTitle("���� ���� �г��� ���� ������");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); //������ ������ ������ ���α׷��� ����ǵ��� ����
		
		//panel�߰��ϱ�
		Container c = getContentPane(); //�����ӿ� ����� �������� �˾Ƴ���
		c.add(new NorthPanel(), BorderLayout.NORTH);
		c.add(new CenterPanel(), BorderLayout.CENTER);
		c.add(new SouthPanel(), BorderLayout.SOUTH);
		
		setSize(300,300);
		setVisible(true);
	}

	public static void main(String[] args) {
		new �ǽ�����8��();
	}
}
