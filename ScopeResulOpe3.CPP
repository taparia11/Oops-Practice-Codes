//access the static variable using the scope resolution (::) operator
#include <iostream>  
using namespace std;   
class Parent  
{  
static int n1;  
public:  
static int n2;  
// The class member can be accessed using the scope resolution operator.  
void fun1 ( int n1)  
{  
// n1 is accessed by the scope resolution operator (:: )   
cout << " The value of the static integer n1: " << Parent::n1;  
cout << " \n The value of the local variable n1: " << n1;  
}  
};  
// define a static member explicitly using :: operator  
int Parent::n1 = 5; // declare the value of the variable n1  
int Parent::n2 = 10;      
int main ()  
{  
Parent b;  
int n1 = 15;  
b.fun1 (n1);  
cout << " \n The value of the Base::n2 = " << Parent::n2;  
return 0;  
}    
