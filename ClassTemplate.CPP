// C++ program to demonstrate the use of class templates
#include <iostream>
using namespace std;
// Class template
template <class T>
class Number {
   private:
    // Variable of type T
    T num;
    

   public:
    Number(T n) : num(n) {}   // constructor

    T getNum() {
        return num;
    }
    
};

int main() {

    // create object with int type
    Number<int> numberInt(7);

    // create object with double type
    Number<double> numberDouble(7.7);
    Number<char> chart('A');

    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;
    cout << "Character = " << chart.getNum() << endl;

    return 0;
}
