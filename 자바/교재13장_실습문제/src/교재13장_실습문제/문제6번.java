package 교재13장_실습문제;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class 문제6번 extends JFrame {
	private ImageIcon icon = new ImageIcon("C:\\Users\\user\\Desktop\\bubble.png");
    private JLabel label;
    private Container c;
    private MyRunnable runnable;
    private Thread thread;
    
    public 문제6번() {
    	super("버블 게임");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        c = getContentPane();
        c.setLayout(null);
        c.addMouseListener(new MouseAdapter() {
            @Override
            public void mousePressed(MouseEvent e) {
                super.mousePressed(e);
                label = new JLabel(icon);
                label.setLocation(e.getX(), e.getY());
                label.setSize(icon.getIconWidth(), icon.getIconHeight());
                c.add(label);
 
                runnable = new MyRunnable(label);
                thread = new Thread(runnable);
                thread.start();
                repaint();
            }
        });
        setSize(400, 400);
        setVisible(true);
    }
    
    public void deleteLabel(JLabel label){
        c.remove(label);
    }
    
    class MyRunnable implements Runnable{
        private JLabel label;
        private boolean flag = false;
        public MyRunnable(JLabel label){
            this.label = label;
        }
        @Override
        public void run() {
            while(true){
                if(flag == true){
                    label.setVisible(false);
                    deleteLabel(this.label);
                }
                else{
                    try{
                        Thread.sleep(20);
                        label.setLocation(label.getX(), label.getY()-5);
                        if(label.getY()+label.getHeight() < 0){
                            this.finish();
                        }
                    }catch (Exception e){
                        e.printStackTrace();
                    }
                }
            }
        }
        public void finish(){
            flag = true;
        }
    }
	public static void main(String[] args) {
		new 문제6번();
	}

}
