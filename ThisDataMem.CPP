#include<iostream>
using namespace std;
class A
{
private:
 int a=10;
public:
void message()
{
cout<< "Hello from A" << "\n";
cout<< this->a;
}
};
int main()
{
A ob;
ob.message();
}
