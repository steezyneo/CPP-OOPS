#include<iostream>

using namespace std;

class Point{
		int a;
	public:
		void getdata() {
			cout<<"Enter an integer number: ";
			cin>>a;
		}

		void display() {
			cout<<"Entered number is : "<<a;
		}

};

void print(){
	Point p;
	p.getdata();
	p.display();
}

int main(){
	print();
}
