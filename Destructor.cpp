#include<iostream>

using namespace std;

class Des{
	int a;
	public:
		Des(){     
			a=100;
		}
		
		~Des(){
			cout<<"Destructor called";
		}
		
		void display(){
			cout<<endl<<"a value is "<<a<<"\n";
		}
};

int main(){
	Des p;
	p.display();
	return 0;
}
