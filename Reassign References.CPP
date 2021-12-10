#include <iostream>  
using namespace std;  
int main()  
{  
int x=11; // variable initialization  
int z=67;  
int &y=x; // y reference to x  
int &y=z; // y reference to z, but throws a compile-time error.  
return 0;}  
