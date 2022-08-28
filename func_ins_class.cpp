#include<iostream>
#include<string.h>

using namespace std;

class Student{
	private:
		char name[30];
		int rollno;
	
	public:
		void setdata(int rn, char *n){
			strcpy(name, n);
			rollno = rn;
		}
		
		void getdata(){
			cout<<"RollNumber="<<rollno<<" ";
			cout<<"Name="<<name<<"\n";
		}
};

int main(){
	Student steezy;
	steezy.setdata(07, "Mouktik");
	steezy.getdata();
	
	return 0;
}
