package 교재4장_실습문제;

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
		System.out.println(year+"년 "+country+"국적의 "+artist+"가 부른 "+title);
	}
}

public class 실습문제3번 {

	public static void main(String[] args) {
		Song song = new Song("Danceing Queen","ABBA",1978,"스웨덴");
		song.Show();
	}

}
