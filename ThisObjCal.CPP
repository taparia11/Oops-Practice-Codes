#include<iostream>
using namespace std;
class A
{
public:
void message()
{
cout<< "Hello from A" << "\n";
cout<< this;
}
};

int main()
{
A ob;
ob.message();
}
