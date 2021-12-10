#include<iostream>
using namespace std;
template<typename T>
class MyClass {
   public:
      MyClass() {
         cout << "This is constructor of generalized class " << endl;
      }
};
template<>
class MyClass <char>{
   public:
      MyClass() {
         cout << "This is constructor of specialized class (Only for characters)" << endl;
      }
};
main() {
   MyClass<int> ob_int;
   MyClass<float> ob_float;
   MyClass<char> ob_char;
   MyClass<string> ob_string;
}
