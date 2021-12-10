//access the static member function using the scope resolution (::) operator
#include<iostream>
using namespace std;  
class ABC  
{  
public:  
// declare static member function  
static int fun()  
{  
cout << " \n Use scope resolution operator to access the static member. ";  
}  
};  
int main ()   
{  
// class_name :: function name  
ABC :: fun ();  
return 0;  
}  
