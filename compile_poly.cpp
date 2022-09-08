#include<iostream>

using namespace std;

class Add{
	public:
		int sum(int num1, int num2){
			return num1+num2;
		}
		int sum(int num1, int num2, int num3){
			return num1+num2+num3;
		}
};
int main(){
	Add obj;
	cout<<"OUTPUT: "<<obj.sum(10, 20)<<endl;
	cout<<"OUTPUT: "<<obj.sum(10, 20, 30)<<endl;
	
	return 0;
}
