#include<iostream>

using namespace std;

class A{
	int m,n;
	public:
		A(int x, int y);
//		A(int x, int y){
//			m = x; n= y;
//			cout<<m<<" "<<n;
//		}
};

A :: A(int x, int y){
	m = x; n=y;
	cout<<m<<" "<<n;
}
int main(){
	A(10, 20);
}
