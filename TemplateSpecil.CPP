#include<iostream>
using namespace std;
template<typename T>
void my_function(T x) {
   cout << "This is generalized template: The given value is: " << x << endl;
}
template<>
void my_function(char x) {
   cout << "This is specialized template (Only for characters): The given value is: " << x << endl;
}
main() {
   my_function(10);
   my_function(25.36);
   my_function('F');
   my_function("Hello");
}
