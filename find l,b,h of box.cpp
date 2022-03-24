// To find the length ,breadth,height of box using out side function defining.
#include<iostream>
using namespace std;
class box
{
	private:
	       float length,breadth,height;
	public:
	      void getdata()
	       {
	       	cout<<"enter length=  ";
	       	cin>>length;
	        cout<<"enter breadth=  ";
	        cin>>breadth;
	        cout<<"enter height=  ";
	        cin>>height;
	       }
	       void viewdata()
	        {
	         cout<<":-length= "<<length<<" , ";
	         cout<<"breadth= "<<breadth<<" , and ";
	         cout<<"height= "<<height<<". "<<"    \n";
	        }
	        void area();     
};
void box::area()
	        {
	        cout<<":-area="<<length*breadth*height;
	        }


int main()
{   cout<<"#######(information of first box)#####\n";
	box b1,b2;
	b1.getdata();
    b1.viewdata();
    b1.area();
    cout<<"\n ######(information of second box)######\n";
	b2.getdata();
	b2.viewdata();
	b2.area();
	return 0;
}
