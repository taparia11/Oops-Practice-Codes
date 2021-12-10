#include <iostream>  
using namespace std;  
class Operate  
{  
public:  
    // declaration of the member function  
    void fun();  
};  
// define the member function outside the class.  
void Operate::fun()   /* return_type Class_Name::function_name */  
{  
cout << " It is the member function of the class. ";  
}  
int main ()  
{  
 // create an object of the class Operate  
Operate op;  
op.fun();  
return 0;  
}  
