import java.util.Scanner;

public class °¡À§¹ÙÀ§º¸ {

	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		System.out.println("°¡À§¹ÙÀ§º¸ °ÔÀÓÀÔ´Ï´Ù. °¡À§, ¹ÙÀ§, º¸ Áß¿¡¼­ ÀÔ·ÂÇÏ¼¼¿ä");
		System.out.print("Ã¶¼ö >> ");
		String a = scanner.next();
		System.out.print("¿µÈñ >> ");
		String b = scanner.next();
		
		if(a.equals("°¡À§")) {
			if(b.equals("°¡À§"))
				System.out.println("ºñ°åÀ½");
			else if (b.equals("¹ÙÀ§"))
				System.out.println("¿µÈñ ½Â¸®");
			else
				System.out.println("Ã¶¼ö ½Â¸®");
		}
		else if(a.equals("¹ÙÀ§")) {
			if(b.equals("°¡À§"))
				System.out.println("Ã¶¼ö ½Â¸®");
			else if (b.equals("¹ÙÀ§"))
				System.out.println("ºñ±è");
			else
				System.out.println("¿µÈñ ½Â¸®");
		}
		else {
			if(b.equals("°¡À§"))
				System.out.println("¿µÈñ ½Â¸®");
			else if (b.equals("¹ÙÀ§"))
				System.out.println("Ã¶¼ö ½Â¸®");
			else
				System.out.println("ºñ±è");
		}
		scanner.close();
		
		
		String name=scanner.next();
	}

}
