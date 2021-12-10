#include <iostream>  
using namespace std; 
class Cube
{
    public:
    int side;
    Cube(int x)
    {
        side=x;
    }
};

int main()
{
    Cube c1(10);
    Cube c2(20);
    Cube c3(30);
    cout << c1.side<<"\n";
    cout << c2.side<<"\n";
    cout << c3.side<<"\n";
}

