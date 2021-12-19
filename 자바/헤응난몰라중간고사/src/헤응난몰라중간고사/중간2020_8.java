package ÇìÀÀ³­¸ô¶óÁß°£°í»ç;

import java.util.StringTokenizer;

public class Áß°£2020_8 {

	public static void main(String[] args) {
		StringTokenizer str = new StringTokenizer("È«±æµ¿/ÀåÈ­=È«·Ã/ÄáÁã=ÆÏÁã",
				"/=");
		
		while(str.hasMoreTokens())
			System.out.println(str.nextToken());

	}

}
