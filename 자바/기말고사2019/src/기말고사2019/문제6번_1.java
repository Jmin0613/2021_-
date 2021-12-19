package 기말고사2019;

import java.io.BufferedReader;

public class ServerEx {
	public static void main(String[] args) {
		BufferedReader in = null;
		BufferdWriter out = null;
		ServerSocket listener = null;
		Socket scocket = null;
		
		Scanner scanner = new Scanner(System.in);
		
		try {
			listener = new ServerSocket(9999);
			System.out.println("Waiting for client to connect...");
			socket = new listener.accept();
			System.out.println("Client on connect!");
			
			in = new BufferedReader(new InputStreamReader(Socket.getInputStream()));
			out= new BufferedWriter(new OutputStreamWriter(Socket.getOutputStream()));
			
			String inputMessage;
			while(true) {
				inputMessage = in.readLine();
				if(inputMessage.equals("bye"));
				
				System.out.println("클라이언트 : "+inputMessage);
				System.out.print();
			}
		}
	}
	public ServerEx() {
		try {
			oServerSocket = new ServerSocket(9999); //Create a ServerSocket of port number 9999.
			System.out.println("Waiting for client to connect...");
			oSocket = oServerSocket.accept();
			System.out.println("Client on connect!");
			oIn = new BufferedReader(new InputStreamReader(oSocket.getInputStream()));
			oOut = new BufferedWriter(new OutputStreamWriter(oSocket.getOutputStream()));
			
			while(true) {
				sInputMessage = oIn.readLine();
				if(sInputMessage.equals("bye")) {
					System.out.println("Connection was end by client!!!");
					break;
				}
				System.out.println("Client : " + sInputMessage);
				System.out.print("send >> ");
				sOutputMessage = scanner.nextLine();
				oOut.write(sOutputMessage + "\n");
				oOut.flush(); //Send a message promptly.
			}
		}
		catch(IOException e) {
			e.printStackTrace();
		}
		finally {
			try {
				scanner.close(); // Scanner object close.
				if(oSocket != null) oSocket.close(); //Transmission end.
				if(oServerSocket != null) oServerSocket.close(); // ServerSocked object close.
			}
			catch(IOException e) {
				e.printStackTrace();
			}
		}
	}
	/*main method*/
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new ServerEx();
	}

}

