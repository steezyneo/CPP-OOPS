#include<iostream>

using namespace std;

class B{
	int a;
	public:
		int b;
		void get_ab(){
			a=5;
			b=10;
		}
		int get_a(){
			return a;
		}
		void show_a(){
			cout<<"a= "<<a<<endl;
		}
};

class D: public B{
	int c;
	public:
		void mul(){
			c = b*get_a();
		}
		void display(){
			cout << "a = "<<get_a()<<endl;
			cout << "b = "<<b<<endl;
			cout << "c = "<<c<<endl<<endl;
		}
};

int main(){
	D d;
	d.get_ab();
	d.show_a();
	d.mul();
	d.display();
	
	d.b = 20;
	d.mul();
	d.display();
}
