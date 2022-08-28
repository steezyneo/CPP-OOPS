#include<iostream>

using namespace std;

void print(){
	class Point{
		int a;
		public:
			void getdata(){
				cout<<"Enter an integer number: ";
				cin>>a;
			}
			
			void display(){
				cout<<"Entered number is : "<<a;
			}
	};
	
	Point p;
	p.getdata();
	p.display();
}

int main(){
	print();
	
	return 0;
}
