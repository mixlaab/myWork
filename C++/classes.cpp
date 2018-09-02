#include<iostream>

using namespace std;

class MyShape{
	private:
//		int x, y;
	public:
		int x, y;
		void getxy(int tempX, int tempY){
			x = tempX;
			y = tempY;
		};
		void printxy(){
			cout<<"x = " << x << endl;
			cout<<"y = " << y << endl;
		};
};

int main(int argc, char *argv[]){
	MyShape fig;
	fig.getxy(3,10);
	fig.x = 4;
	fig.y = 5;
	fig.printxy();
	return 0;
}
