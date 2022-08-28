#include<iostream>
#include<string.h>

using namespace std;

class Student{
	private:
		char name[30];
		int rollno;
	
	public:
		void setdata(int rn, char *n);
		void getdata();
};

void Student::setdata(int rn, char *n){
	rollno = rn;
	strcpy(name, n);
}

void Student::getdata(){
	cout<<"Rollnumber="<<rollno<<" ";
	cout<<"Name="<<name<<"\n";
}

int main(){
	Student steezy;
	steezy.setdata(07, "Mouktik");
	steezy.getdata();
}
