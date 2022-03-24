/* program to overload of using this operator (--)or post decreament and compare with two object */
#include<iostream>
using namespace std;
class Distance
{
	private:
	float inch,feet;
	public:
	Distance()
	{
		feet=0;
		inch=0;
	}
	Distance (float ff,float ii)
	{
		feet=ff;
		inch=ii;
	}
	void show()
	{
		cout<<"Yourfeet is = "<<feet<<"'"<<endl;
		cout<<"Your inches is = "<<inch<<"'"<<endl;
    }
    void operator --(int)
    {
    	feet--;
    	inch--;
   }
};
int main()
{
	Distance d1(22,44);
	d1.show();
	d1--;
	d1.show();
	return 0;
}
