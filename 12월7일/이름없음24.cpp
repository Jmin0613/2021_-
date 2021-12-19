#include <iostream>
#include <string.h>
using namespace std;

class String{
	public :
		String(){
			strData=NULL;
			len=0;
		}
		
		String (const char *str){
			len = strlen(str);
			strData=new char[len+1];
			strcpy(strData, str);
		}
		~String(){
			if(strData){
				delete[] strData;
			}
		}
		
		const char*GetStrData() const{
		if(strData) return strData;
		return "";
		}
		int GetLen() const{
			return len;
		}
	
	private:
		char *strData;
		int len;
};

int main(){
	
}
