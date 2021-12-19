#include <iostream>
using namespace std;

class Color{
	public :
		Color : r(0),g(0),b(0) {}
		Color(float r, float g, fkoat b) : r(r), g(g), b(b){}
		
		float GetR(){
			return r;
		}
		float GetG(){
			return g;
		}
		float GetB(){
			return b;
		}
		
		static Color MixColor(Color a, Color b){
			return Color((a.r+b.r)/2, (a.g+b.g)/2, (a.b+b.b)/2);
		}
		
	private:
		float r;
		float g;
		float b;
};

int main(){
	
}
