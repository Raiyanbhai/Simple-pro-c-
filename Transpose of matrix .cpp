//WAP to take input and dispaly transpose it in matrix form
#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
int i,j,rows,columns;
int A[20][20],B[20][20],C[20][20],D[50][50];
cout<<"enter the rows=";
cin>>rows;
cout<<"enter the columns=";
cin>>columns;
cout<<"***********Entre the  1st matrix**************\n";
for(i=0;i<rows;i++)
{
	for(j=0;j<columns;j++)
	{
	  cout<<"Enter the element="<<i<<"   ";
	  cin>>A[i][j];
	}
}
	
cout<<"***********Entre the  2nd matrix**************\n";
for(i=0;i<rows;i++)
{
	for(j=0;j<columns;j++)
	{
		cout<<"Enter the element="<<i<<"   ";
		cin>>B[i][j];
	}
}

for(i=0;i<rows;i++)
{
	for(j=0;j<columns;j++)
	{ 
		C[i][j]=A[i][j]+B[i][j];
	}
}

for(i=0;i<rows;i++)
{
	for(j=0;j<columns;j++)
	{
		cout<<C[i][j]<<"\t";
	}
	    cout<<"\n";
}

cout<<"            "<<rows<<"/"<<columns<<"matrix\n";

for(i=0;i<rows;i++)
{
	for(j=0;j<columns;j++)
	{
		D[j][i]=C[i][j];
	}
}

if(rows==columns)
{
	cout<<"The traspose of matrix is:-\n";
	for(i=0;i<rows;i++)
     {
	   for(j=0;j<columns;j++)
	    {
	      cout<<D[i][j]<<"\t";
	    }
	  cout<<"\n";
	 }
    cout<<"            "<<rows<<"/"<<columns<<"matrix\n";
}

else
{     
	for(i=0;i<columns;i++)
	{
		for(j=0;j<rows;j++)
		{
		  cout<<D[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
cout<<"            "<<rows<<"/"<<columns<<"matrix\n";
return 0;
}