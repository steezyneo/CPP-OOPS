#include<iostream>

using namespace std;

class Point{
	int a;
	public:
		Point(){
			a = 100;
//			cout<<"Entered number is : "<<a;
		}

		void display() {
			cout<<"Entered number is : "<<a;
		}
};

int main(){
	Point p;
	p.display();
//	Point()
}
