package ����4��_�ǽ�����;

class Song{
	String title;
	String artist;
	int year;
	String country;
	
	Song(){}
	
	Song(String title, String artist, int year, String country){
		this.title=title;
		this.artist=artist;
		this.year=year;
		this.country=country;
	}
	
	public void Show() {
		System.out.println(year+"�� "+country+"������ "+artist+"�� �θ� "+title);
	}
}

public class �ǽ�����3�� {

	public static void main(String[] args) {
		Song song = new Song("Danceing Queen","ABBA",1978,"������");
		song.Show();
	}

}
