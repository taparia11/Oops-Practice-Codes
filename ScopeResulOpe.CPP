#include <iostream>
using namespace std;
char a = 'm';
static int b = 50;

int main() {
   char a = 's';

   cout << "The static variable : "<< ::b;
   cout << "\nThe local variable : " << a;
   cout << "\nThe global variable : " << ::a;

   return 0;
}
