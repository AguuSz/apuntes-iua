#include <iostream>
using namespace std;

class vector2D {
private:
	int x;
	int y;

public:
	vector2D(){
		x=0;
		y=0;
	}
	
	vector2D(int x, int y) {
		this->x = x;
		this->y = y;
	}
	
	int getX(){
		return x;
	}
	
	int getY(){
		return y;
	}
	
	void setX(int x){
		this->x = x;
	}
	void setY(int y){
		this->y = y;
	}
	
	vector2D suma(vector2D b){
		
		vector2D tmp;
		tmp.x = x + b.x;
		tmp.y = y + b.y;
		
		return tmp;
	}
		
	void print() {
		cout<<"x: "<<x<<"\ny: "<<y<<endl;
	}
};

int main(int argc, char *argv[]) {
	
	vector2D aa;
	vector2D bb(10,20);
	
	vector2D cc;
	
	aa.setX(5);
	aa.setY(-3);
	
	cc = aa.suma(bb);
	
	aa.print();
	bb.print();
	cc.print();
	
	return 0;
}

