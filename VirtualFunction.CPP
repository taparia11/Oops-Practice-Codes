/* Virtual Function Concept: InfoBrother:*/
 
#include<iostream>
using namespace std;
 
class Base //Base Class:
{
    public:
        void display() //Simple function to display some content.
        {
            cout<<" Base Class "<<endl;
        }
};
 
class Derived: public Base //Derived class. Using Inheritance concept.
{
    public:
        void display() //redefine Same function.
        {
            cout<<" Derived Class "<<endl;
        }
};
 
main()
{
    Base *ptr; //pointer object of type Base.
    Derived obj; //object of type Derived
 
    ptr->display(); //function calling using Base-Class object:
 
    ptr=&obj; //pointer point to Address of Derived Class.
    ptr->display(); //function calling using pointer, that point to Derived class.
 
    return 0;
}
