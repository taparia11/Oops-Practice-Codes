#include<iostream>
using namespace std;
class cal
{
	public:
		static int add(int a,int b)
		{
			return a+b;
		}
static int add(int a,int b, int c)
{
	return a+b+c;
}
};
int main()
{
	cal C;
	cout<<C.add(10,20)<<"\n";
	cout<<C.add(10,20,30)<<"\n";
	return 0;
}
