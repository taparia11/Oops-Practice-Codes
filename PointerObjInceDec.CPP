// Incrementing and decrementing an object pointer.
#include <iostream>
using namespace std;

class My_Class {
  int num;
public:
  void set_num(int val) {num = val;}
  void show_num();
};

void My_Class::show_num()
{
  cout << num << "\n";
}

int main()
{
  My_Class ob[2], *p;

  ob[0].set_num(10);  // access objects directly
  ob[1].set_num(20);

  p = &ob[0];  // obtain pointer to first element
  p->show_num(); // show value of ob[0] using pointer

  p++;  // advance to next object
  p->show_num(); // show value of ob[1] using pointer

  p--;  // retreat to previous object
  p->show_num(); // again show value of ob[0]

  return 0;
}
