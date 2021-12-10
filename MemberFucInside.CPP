#include<iostream>
using namespace std;
class Cube
{
    public:
    int side;
    int getVolume()
    {
        return side*side*side;      //returns volume of cube
    }
};
class CubeA
{
    public:
    int side;
    int getVolume();
};

// member function defined outside class definition
int CubeA :: getVolume()
{
    return side*side*side;
}
int main()
{
    Cube C1;
    CubeA C2;
    C1.side = 4;   // setting side value
    C2.side=5;
    cout<< "Volume of cube C1 = "<< C1.getVolume()<<"\n";
    cout<< "Volume of cube C2 = "<< C2.getVolume();
}
