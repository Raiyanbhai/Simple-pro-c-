//WAP to display constant time
#include<iostream>
# include<conio.h>
using namespace std;
class Time
{
	private:
	    int   hour,minute,second;
	public:
	      Time(int h,int m,int s)
	      {
	      	hour=h;
	      	minute=m;
	      	second=s;
	      }
	      void showtime()const
	      {
	      	cout<<hour<<":"<<minute<<":"<<second<<endl;
	      }
};
int main()
{     int i=1;
	const Time t1(12,30,20),t2(13,54,87),t3(88,99,77);
	t1.showtime();
    t2.showtime();
   	t3.showtime();
	return 0;
}
/*

//WAP to display time using constant function
#include<iostream>
# include<conio.h>
using namespace std;
class Time
{
	private:
	    int   hour,minute,second;
	   int h,m,s;
	public:Time()
	       {hour=h;
	       	minute=m;
	       	second=s;
	       	}
	      void	getdata()
	       	{ 
	       	 cout<<"Enter any 3 time formate :";
	       	  cin>>h>>m>>s;
	       	 cout<<endl;
	       	}	
	      void showtime()const
	      {
	      	cout<<h<<":"<<m<<":"<<s<<endl;
	      }
};
int main()
{    int ti;  Time t1,t2,t3;
	
	t1.getdata();
	t2.getdata();
	t3.getdata();
	t1.showtime();
    t2.showtime();
   	t3.showtime();
	return 0;
}
*/
