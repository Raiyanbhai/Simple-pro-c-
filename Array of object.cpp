//WAP to display distance using array of object

# include<iostream>
using namespace std;
class Distance
{
	private: float inch;
	         float feet;
	public: void getdata()
	       {
	       cout<<"Enter your inch and feet: ";
	       cin>>inch>>feet;
	       }
	       void showdata()
	       {
	       cout<<"Your distance covered is :"<<inch<<"' inches   "<<feet<<"\" feet "<<endl;
	       }
    Distance addDistance(Distance d1);
};
int main()
{
	Distance d[8];
	int n=1;
	char ans;
	do
	{ 
	cout<<"Enter your distance number "<<n<<"is:"<<endl;
	d[n].getdata();
	n=n+1;
		ans=3;
	}
	while(ans>=n);
	for(int i=1;i<=3;i++)
	{
	cout<<"Distance number: "<<i<<endl;
	d[i].showdata();
	cout<<endl;
	
	}return 0;


// WAP to get 10 num and display it in simple array of object program 

# include <iostream>
using namespace std;
class A
{
	private:float x,y;
	public:void get(){cout<<"your 1st and 2nd num:";
		cin>>x>>y;
		}
		void out()
		{cout<<"your num is :"<<x<<"and"<<y<<endl;}
		A addA(A a);
};
int main()
{A a[8];
	
	int b, n=1;
	for(int i=0;i<=9;i++)
	{
	a[i].get();
		cout<<"your num :"<<n<<"is"<<endl;
	a[i].out();
	
	n=n+1;
		cout<<endl;
	}
	return 0;
}