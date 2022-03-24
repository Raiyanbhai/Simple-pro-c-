//WAP to open "student.text"file in writing mode;
#include<iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream o;
	o.open("student.text",ios::out);
	char name[20],address[30];
	int roll,m1,m2;
	cout<<"Enter the name of student";
	cin>>name;
	cout<<endl<<"Enter the address";
	cin>>address;
	cout<<endl<<"Enter the roll";
	cin>>roll;
	cout<<endl<<"Enter the mark of m1,m2";
	cin>>m1>>m2;
	o<<name<<endl<<address<<endl<<roll<<endl<<m1<<endl<<m2;
	cout<<"success"<<endl;
	o.close();
	return 0;
	}
	
