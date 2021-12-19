#include <iostream>
using namespace std;

class String{
	public:
		String(){}
		String(const char *str){}
	
	private:
		char *strData;
		int len;
};
