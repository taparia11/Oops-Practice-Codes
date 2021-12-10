#include <iostream>  
using namespace std; 
class Cube
{
    public:
    int side;
    Cube()
    {
        side = 10;
    }
};
int main()
{
    Cube c;
    cout << c.side;
}
