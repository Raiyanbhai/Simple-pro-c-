//This is simple constructer program.
#include<iostream>
using namespace std;
class Coordinate
{
	private:
	float x,y,z;
	public:
//	Coordinate():x(0),y(0),z(0) {}
	//Coordinate(float xx, float yy, float zz):x(xx),y(yy),z(zz){}
	Coordinate()
	{
		x=0;
		y=0;
		z=0;
	}
	Coordinate(float xx,float yy,float zz)
	{
		x=xx;
		y=yy;
		z=zz;
	}
	void show()
	{
		cout<<"your entered number is:"<<x<<","<<y<<","<<z<<endl;
		cout<<"your sum is : "<<x+y+z<<endl;
		
	}
};
int main()
{
	Coordinate p1(7,8,9),p2 (2,3,4);
	p1.show();
	p2.show();
	return 0;
}
