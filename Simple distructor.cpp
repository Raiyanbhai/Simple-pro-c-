//Use of distructor
// Header Files
#include<iostream>
#include<conio.h>
using namespace std;//Standard Namespace                                Declaration
class BaseClass // Class Name
{
public:
   
   BaseClass() //Constructor of the BaseClass
   {
      cout << "Constructor of the BaseClass : Object Created"<<endl;
   }
	
    ~BaseClass() //Destructor of the BaseClass
   {
    cout << "Destructor of the BaseClass : Object Destroyed"<<endl;
   }
};
int main ()
{
BaseClass des;// Object Declaration for                        BaseClass
getch();// Wait For Output Screen
return 0;//Main Function return Statement
}
