#include<iostream>
#include"math.h"
using namespace std;

void basic();

int main() {
  cout <<"Basic math (1), Area (2), Volume(3)"
  
}

void basic() {
  int x;
  int y;
  int t;
  double z;
  
  cout <<"Enter an integer please." <<endl;
  cin >> x;

  cout <<endl;

  cout <<"Please enter another integer." <<endl;
  cin >> x;

  cout <<"Add (1), Subtract (2), Multiply (3), Divide (4), Hypot(5)" <<endl;
  cin >> t;

  if (t == 1) {
    z = y + x;
  } else if (t == 2) {
    z = y - x;
  } else if (t == 3) {
    z = y * x;
  } else if (t == 4) {
    z = y / x;
  } else if (t == 5) {
    z = sqrt((y*y)+(x*x));
  }

  cout <<endl <<z <<endl;
}
