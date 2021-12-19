#include <iostream>
using namespace std;

class Vector2{
public :
	Vector2();
	Vector2(float x, float y);
	float GetX() const;
	float GetY() const;
	Vector2 operator+(const Vector2 other) const;
	Vector2 operator-(const Vector2 other) const;
	
private :
	float x,y;
};

int main(){
	//...
}

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::GetX() const {return x;}
float Vector2::GetY() const {return y;}

Vector2 Vector2::operator+(const Vector2 other){
	return Vector2(x+other.x, y+other.y);
}
Vector2 Vector2::operator-(const Vector2 other){
	return Vector2(x-other.x, y-other.y);
}
