#include<iostream>

using namespace std;

class Point{
	int a;
	public:
		Point(){     
			a=100;
		}
		
		Point(int x){
			a=x;
		}
		Point(Point &p){
			a=p.a;
		}
		void display(){
			cout<<"a value is "<<a;
		}
};

int main(){
	Point p1;
	p1.display();
	
	Point p2(200);
	p2.display();
	
	Point p3(p1);
	p3.display();
	
	return 0;
}
