/* Pure Virtual Function example: InfoBrother:*/
#include <iostream>
using namespace std;
class Shape /* Abstract class */
{
   protected:
        float l;
 
   public:
        void get_data() /*this function is not virtual. */
        {
            cin>>l;
        }
 
        virtual float area() = 0; /* Pure virtual function */
};
 
 
class Square : public Shape //derived class.
{
   public:
        float area()
        { 
            return l*l; 
        }
};
 
 
class Circle : public Shape //derived class.
{
   public:
        float area()
        { 
            return 3.14*l*l; 
        }
};
 
int main()
{
   Square squ; //object of type Square:
   Circle cir; //Object of type Circle:
 
   cout<<"Enter length to calculate area of a square: ";
   squ.get_data();
   cout<<"Area of square: "<<squ.area();
 
   cout<<"\n\nEnter radius to calculate area of a circle:";
   cir.get_data();
   cout<<"Area of circle: "<<cir.area();
 
   return 0;
}
