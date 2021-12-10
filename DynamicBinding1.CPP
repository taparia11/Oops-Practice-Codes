//Dynamic Binding program in c++  
#include <iostream> 
using namespace std;  
int Square(int x) //Square is =x*x;  
{  
    return x * x;  
}  
int Cube(int x) // Cube is =x*x*x;  
{  
    return x * x * x;  
}  
main() {  
    int x = 7;  
    int choice;  
    do {  
        cout << "Enter 0 for Square value, 1 for Cube value :\n";  
        cin >> choice;  
    }  
    while (choice < 0 || choice > 1);  
    int( * ptr)(int);  
    switch (choice) {  
        case 0:  
            ptr = Square;  
            break;  
        case 1:  
            ptr = Cube;  
            break;  
    }  
    cout << "The result is :" << ptr(x);  
    return 0;  
}  
