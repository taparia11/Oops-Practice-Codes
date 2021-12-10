#include<iostream>
using namespace std;
class A
{
	protected:
		int a,b;
	public:
		void getdata(int x,int y)
		{
			a=x;
			b=y;
		}
};
class B : public A
{
public:
  void showdata()
  {
    cout << "The value of the first protected variable(output of subclass)= " << a << endl;
    cout << "The value of the second protected variable(output of subclass)" << b << endl;
    cout << "Sum of the protected variables = " << a + b << endl;
  }
};
int main()
{
  B obj;
  obj.getdata(4, 5);
  obj.showdata();
  return (0);
}
