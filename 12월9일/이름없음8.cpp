#include <iostream>
using namespace std;

class GameWindow{
public:
	//»ý¼ºÀÚ  
	GameWindow();
	GameWindow(int, int);
		
	int GetWidth();
	int GetHeight();
		
	int ResizeWindow(int w, int h);
		
private:
	int width;
	int height;
};

GameWindow::GameWindow():width(800),height(600){}
GameWindow::GameWindow(int w, int h){
	if(w>=800 && h>=600)
		width=w, height=h;
	if(w==0 && h==0)
		width=800, height=600;
}

int GameWindow::GetWidth(){return width;}
int GameWindow::GetHeight(){return height;}

int GameWindow::ResizeWindow(int w, int h){
	if(w>=800 && h>=600)
		width=w, height=h;
	if(w==0 && h==0)
		width=800, height=600;
}

int main(){
	GameWindow mainWindow;
	mainWindow.ResizeWindow(1366,768);
	cout<<mainWindow.GetWidth()<<"x"<<mainWindow.GetHeight()<<endl;
}
