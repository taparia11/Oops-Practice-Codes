#include<iostream>
using namespace std;
class A
{
	private:
		int a,b;
	public:
		void getdata(int x,int y)
		{
			a=x;
			b=y;
		}
			void showdata()
			{
				cout<<"The sum of Private number is A+B="<<a+b<<"\n";
				cout<<"The product of Private number is A*B="<<a*b<<"\n";
	
			}
};
int main()
{
	A obj;
	obj.getdata(4,5);
	obj.showdata();
	return 0;
}
