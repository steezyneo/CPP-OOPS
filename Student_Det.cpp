#include<iostream>
#include<string.h>

using namespace std;

class Student{
	private:
		string name;
		int rollno;
		int total;
		float perc;
	public:
		void getData(){
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter RollNo: ";
			cin>>rollno;
			cout<<"Enter total marks out of 500: "<<endl;
			cin>>total;
			perc= (float)total/500*100;
		}
		
		void display(){
			cout<<"Student Details"<<endl;
			cout<<"Name: "<<name<<" RollNo: "<<rollno<<" Total: "<<total<<" Percentage: "<<perc<<"%";
		}
};

int main(){
	Student s1;
	s1.getData();
	s1.display();
	
	return 0;
}
