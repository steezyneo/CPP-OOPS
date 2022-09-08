#include<iostream>

using namespace std;

class A{
	public:
		void disp(){
			cout<<"Super class function "<<endl;
		}
};

class B: public A{
	public:
		void disp(){
			cout<<"Sub class function"<<endl;
		}
};

int main(){
	A obj;
	obj.disp();
	
	B obj1;
	obj1.disp();
	
	return 0;
}
