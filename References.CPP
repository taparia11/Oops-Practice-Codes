#include <iostream>  
using namespace std;  
int main()  
{  
int a=70; // variable initialization  
int &b=a;  
int &c=a;  
std::cout << "Value of a is :" <<a<< std::endl;  
std::cout << "Value of b is :" <<b<< std::endl;  
std::cout << "Value of c is :" <<c<< std::endl;  
return 0;}  
