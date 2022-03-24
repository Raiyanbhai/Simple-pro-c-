//WAP to make a simple calculator and display it
#include<iostream>
using namespace std;
int main()
{   
	int driven,a,b,c,d,e,f;
	do
	{
		cout<<"***simple calculator***\n";
		cout<<"1.add\n 2.subtract\n 3.multiply\n 4.divide\n 5.exit\n";
	    cout<<"****BYE-BYE *****\n";
	    cout<<endl;
		cout<<"what you want to calculate above the opt,then please enter\n";
		cin>>driven;
		cout<<"enter any two num :";
		cin>>a>>b;
	
		switch(driven)
		{
			case 1: c=a+b;
			       cout<<"your answer is add= "<<c<<"\n";
			break;
			
			case 2: d=a-b;
			       cout<<"your answer is subtrsct="<<d<<"\n";
			break;
			
			case 3: e=a*b;
			       cout<<" your answer is multiply="<<e<<"\n";
			break;
			
			case 4: f=a/b;
			       cout<<" your answer is divide="<<f<<"\n";
			break;
			
			case 5: cout<<"exit\n";
			break;
			default:
		             cout<<"you are chooing wrong number.choose any one by given above option\n";
			break;
			}
			}
	
	while(driven<=5);
			cout<<"               ";
	return 0;
	}
