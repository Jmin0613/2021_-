#include <iostream>
using namespace std;

class Complex{
	public:
		Complex(double real_=0, double imag_=0){
			real=real_;
			image=image_;
		}
		
		double GetReal(){
			return real;
		}
		void SetReal(double real_){
			real=real_;
		}
		
		double GetImage(){
			return iamge;
		}
		void SetImage(double image_){
			image=image_;
		}
		
	private:
		double real;
		double image;
};

int main(){
	
}
