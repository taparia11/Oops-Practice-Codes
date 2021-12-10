#include<iostream>
using namespace std;
int sum(int,int);
float mul(float,int);
int sum(int a,int b)
{
	return a+b;
}
float mul(float x,int y)
{
	return x*y;
}
int main()
{
	int r1 = sum(30,45);
	float r2=mul(12.43,45);
	cout<<" R1 is = "<<r1<<"\n";
	cout<<" R2 is = "<<r2<<"\n";
	return 0;
	
}
