#include <iostream>

using namespace std;

struct TV{
private:
	bool powerOn;
	int channel;
	int volume;

public:	
	void on(){
		powerOn=true;
		cout << "TV�� Ŵ"<<endl;
	}
	
	void off(){
		powerOn=false;
		cout <<"TV�� ��"<<endl;
	}
	
	void setChannel(int cnl){
		if (cnl>=1 && cnl<=999){
			channel=cnl;
			cout<<"ä���� "<<cnl<<"(��)�� �ٲ�."<<endl;
		}
	}
	
	void 
	setVolume(int vol){
		if(vol >=0 && vol <=100){
			volume=vol;
			cout<<"������ "<<volume<<"(��)�� �ٲ�."<<endl;
		}
	}
}; 

int main(){
	TV lg;
	lg.on();
	lg.setChannel(10);
	lg.setVolume(-50);
	
}
