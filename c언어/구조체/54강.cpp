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
		cout << "TV¸¦ Å´"<<endl;
	}
	
	void off(){
		powerOn=false;
		cout <<"TV¸¦ ²û"<<endl;
	}
	
	void setChannel(int cnl){
		if (cnl>=1 && cnl<=999){
			channel=cnl;
			cout<<"Ã¤³ÎÀ» "<<cnl<<"(À¸)·Î ¹Ù²Þ."<<endl;
		}
	}
	
	void 
	setVolume(int vol){
		if(vol >=0 && vol <=100){
			volume=vol;
			cout<<"º¼·ýÀ» "<<volume<<"(À¸)·Î ¹Ù²Þ."<<endl;
		}
	}
}; 

int main(){
	TV lg;
	lg.on();
	lg.setChannel(10);
	lg.setVolume(-50);
	
}
