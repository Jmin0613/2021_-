package ����9��_�ǽ�����_�ٽ�Ǯ��;

import javax.swing.*;
import java.awt.*;

public class ����2 extends JFrame {
	public ����2() {
		setTitle("BorderLayout Practice");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		Container c = getContentPane();
		c.setLayout(new BorderLayout(5,7));
		
		c.add(new JButton("north"), BorderLayout.NORTH);
		c.add(new JButton("south"), BorderLayout.SOUTH);
		c.add(new JButton("west"), BorderLayout.WEST);
		c.add(new JButton("east"), BorderLayout.EAST);
		c.add(new JButton("center"), BorderLayout.CENTER);
		
		setSize(400,200);
		setVisible(true);
	}

	public static void main(String[] args) {
		new ����2();
	}

}
