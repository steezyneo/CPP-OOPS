#include<iostream>
#include<string.h>

using namespace std;

class Student{
	private:
		string  name;
		int rollno;
	
	public:
		void setdata(int rn, string n){
			name = n;
			rollno = rn;
		}
		
		void getdata(){
			cout<<"RollNumber="<<rollno<<" ";
			cout<<"Name="<<name<<"\n";
		}
};

int main(){
	Student s1;
	s1.setdata(7, "Steezy");
	s1.getdata();
	
	return 0;
}
