#include<iostream>
using namespace std;
class A
{
private:
int a=10;
public:
void message();
void hello();
};
//Definition of message() function of A class
void A :: message()
{
cout<< "Hello from A" << "\n";
this->hello();
}

//Definition of hello() function of A class
void A :: hello()
{
cout<< "Bonjour" << "\n";
cout<< "Hello" << "\n";
cout<< "Namaste" << "\n";
}
int main()
{
A ob;
ob.message();
}
