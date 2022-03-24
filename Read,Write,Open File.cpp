//WAP to store objects of time class in a file using write function. 

#include <iostream>
#include <fstream>
using namespace std; 
class Time 
{ 
private:
 int h,m,s; 
public:
 Time() 
 { 
 h = 12; 
 m = 12; 
 s = 12; 
 } 
 Time(int hh, int mm, int ss) 
 { 
 h = hh; 
 m = mm; 
 s = ss; 
 } 
 void get_time() 
 { 
 cout<<"Enter hr, min, sec: "; 
 cin>>h>>m>>s; 
 } 
 void display_time() 
 { 
 cout<<h<<" : "<<m<<" : "<<s<<endl; 
 } 
}; 
int main() 
{ 
 Time t; 
 int i; 
 fstream qq; 
 qq.open("time.txt",ios::out); 
 for(i=0;i<5;i++) 
 { 
 t.get_time(); 
 qq.write((char *) &t, sizeof(t)); 
 } 
 cout<<"SUCCESS"<<endl; 
 return 0; 
}



//WAP to read objects of time class using read function and display them on screen. 
#include <iostream>
#include <fstream>
using namespace std; 
class Time 
{ 
private:
 int h,m,s; 
public:
Time() 
 { 
 h = 0; 
 m = 0; 
 s = 0; 
 } 
 Time(int hh, int mm, int ss) 
 { 
 h = hh; 
 m = mm; 
 s = ss; 
 } 
 void get_time() 
 { 
 cout<<"Enter hr, min, sec: "; 
 cin>>h>>m>>s; 
 } 
 void display_time() 
 { 
 cout<<h<<" : "<<m<<" : "<<s<<endl; 
 } 
}; 
int main() 
{ 
 Time t; 
 fstream qq; 
 qq.open("time.txt",ios::in); 
 for (int i=0;i<=5;i++)
 { 
 qq.read((char *) &t, sizeof(t)); 
 t.display_time(); 
 } 
 return 0; 
}
