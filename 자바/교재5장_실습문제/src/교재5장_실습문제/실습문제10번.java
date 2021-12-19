package 교재5장_실습문제;

abstract class PairMap{
	protected String keyArray[]; //key들을 저장하는 배열
	protected String valueArray[]; //value들을 저장하는 배열
	abstract String get(String key); //key값을 가진 value리턴. 없으면 null리턴.
	abstract void put(String key,String value); //key와 value를 쌍으로 저장. 기존에 key있으면, 값을 value로 수정
	abstract String delete(String key); //key값을 가진 아이템(value와 함께) 삭제. 삭제된 value값 리턴
	abstract int length(); //현재 저장된 아이템의 개수 리턴
}

class Dictionary extends PairMap{
	int num;
	
	public Dictionary(int len) { //배열 크기
		this.num=0;
		keyArray = new String[len];
		valueArray = new String[len];
	}
	
	@Override
	String get(String key) {
		for(int i=0;i<num;i++) {
			if(keyArray[i].equals(key)) { //key값을 가진 value리턴
				return valueArray[i];
			}
		}
		return null; //없으면 null리턴.
	}
	
	@Override
	void put(String key,String value) { //key와 value를 쌍으로 저장
		for(int i=0;i<num;i++) {
			if(keyArray[i].equals(key)) { //입력된 key중에 같은 값있으면 value로 수정
				valueArray[i]=value;
				return ;
			}
		}
		//key와 value를 쌍으로 저장
		valueArray[num]=value;
		keyArray[num]=key;
		num++;
	}
	
	@Override
	String delete(String key) {
		String deleteData=null;
		
		//key값을 가진 아이템(value와 함께) 삭제
		for(int i=0;i<num;i++) {
			if(keyArray[i].equals(key)) {
				deleteData=valueArray[i]; //삭제할 value값 저장, 리턴을 위해
				for(int j=i;j<num-1;j++) { //key값을 가진 아이템(value와 함께) 삭제, 앞에 것 당기기.
					valueArray[j]=valueArray[j+1];
					keyArray[j]=keyArray[j+1];
				}
				num--;
			}
		}
		return deleteData; //삭제된 값 리턴 
	}
	
	@Override
	int length() {
		return num;
	}
}

public class 실습문제10번 {

	public static void main(String[] args) {
		Dictionary dic = new Dictionary(10);
		dic.put("황기태","자바");
		dic.put("이재문","파이선");
		dic.put("이재문", "C++");
		System.out.println("이재문의 값은 "+dic.get("이재문"));
		System.out.println("황기태의 값은 "+dic.get("황기태"));
		dic.delete("황기태");
		System.out.println("황기태의 값은 "+dic.get("황기태"));
	}

}
