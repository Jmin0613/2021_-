package ����5��_�ǽ�����;

abstract class PairMap{
	protected String keyArray[]; //key���� �����ϴ� �迭
	protected String valueArray[]; //value���� �����ϴ� �迭
	abstract String get(String key); //key���� ���� value����. ������ null����.
	abstract void put(String key,String value); //key�� value�� ������ ����. ������ key������, ���� value�� ����
	abstract String delete(String key); //key���� ���� ������(value�� �Բ�) ����. ������ value�� ����
	abstract int length(); //���� ����� �������� ���� ����
}

class Dictionary extends PairMap{
	int num;
	
	public Dictionary(int len) { //�迭 ũ��
		this.num=0;
		keyArray = new String[len];
		valueArray = new String[len];
	}
	
	@Override
	String get(String key) {
		for(int i=0;i<num;i++) {
			if(keyArray[i].equals(key)) { //key���� ���� value����
				return valueArray[i];
			}
		}
		return null; //������ null����.
	}
	
	@Override
	void put(String key,String value) { //key�� value�� ������ ����
		for(int i=0;i<num;i++) {
			if(keyArray[i].equals(key)) { //�Էµ� key�߿� ���� �������� value�� ����
				valueArray[i]=value;
				return ;
			}
		}
		//key�� value�� ������ ����
		valueArray[num]=value;
		keyArray[num]=key;
		num++;
	}
	
	@Override
	String delete(String key) {
		String deleteData=null;
		
		//key���� ���� ������(value�� �Բ�) ����
		for(int i=0;i<num;i++) {
			if(keyArray[i].equals(key)) {
				deleteData=valueArray[i]; //������ value�� ����, ������ ����
				for(int j=i;j<num-1;j++) { //key���� ���� ������(value�� �Բ�) ����, �տ� �� ����.
					valueArray[j]=valueArray[j+1];
					keyArray[j]=keyArray[j+1];
				}
				num--;
			}
		}
		return deleteData; //������ �� ���� 
	}
	
	@Override
	int length() {
		return num;
	}
}

public class �ǽ�����10�� {

	public static void main(String[] args) {
		Dictionary dic = new Dictionary(10);
		dic.put("Ȳ����","�ڹ�");
		dic.put("���繮","���̼�");
		dic.put("���繮", "C++");
		System.out.println("���繮�� ���� "+dic.get("���繮"));
		System.out.println("Ȳ������ ���� "+dic.get("Ȳ����"));
		dic.delete("Ȳ����");
		System.out.println("Ȳ������ ���� "+dic.get("Ȳ����"));
	}

}
