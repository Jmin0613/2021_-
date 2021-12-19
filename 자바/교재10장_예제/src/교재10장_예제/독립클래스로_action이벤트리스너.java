package 교재10장_예제;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class 독립클래스로_action이벤트리스너 extends JFrame {
	
	public 독립클래스로_action이벤트리스너() {
		setTitle("Action 이벤트 리스너 예제");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Container  c=getContentPane();
		c.setLayout(new FlowLayout());
		JButton btn = new JButton("Action");
		btn.addActionListener(new MyActionListener());
		c.add(btn);
		
		setSize(350,150);
		setVisible(true);
		
	}

	public static void main(String[] args) {
		new 독립클래스로_action이벤트리스너();

	}

}

class MyActionListener implements ActionListener{
	public void actionPerfomed(ActionEvent e) {
		JButton b = (JButton)e.getSource();
		
		if(b.getText().equals("Action"))
			b.setText("액션");
		else
			b.setText("Action");
	}
}
