#include<iostream>
#include<string.h>

using namespace std;

class Student{
	private:
		string name;
		int rollno;
	
	public:
		void setdata(int rn, string n);
		void getdata();
};

void Student::setdata(int rn, string n){
	rollno = rn;
	name = n;
}

void Student::getdata(){
	cout<<"Rollnumber="<<rollno<<" ";
	cout<<"Name="<<name<<"\n";
}

int main(){
	Student steezy;
	steezy.setdata(7, "Steezy");
	steezy.getdata();
}
