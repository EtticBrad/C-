#include<iostream>
#include"math.h"
using namespace std;

void vol();

void area();

void basic();

int main() {
  int t;
  
  cout <<"Basic math (1), Area (2), Volume(3)" <<endl;
  cin >> t;
  
  if (t == 1) {
    basic();
  } else if (t == 2) {
    area();
  } else if (t == 3) {
    vol();
  }
}

void basic() {
  int x;
  int y;
  int t;
  double z;
  
  cout <<"Enter an integer please." <<endl;
  cin >> y;

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

  cout <<endl <<z;
}

void area() {
  double x;
  double y;
  int t;
  double z;

  cout <<"Rectangle (1), Cicle (2), Triangle (3)" <<endl;
  cin >> t;

  if (t == 1) {
    cout <<"Enter length." <<endl;
    cin >> x;

    cout <<endl;

    cout <<"Enter width." <<endl;
    cin >> y;

    z = x * y;
  } else if (t == 2) {
    cout <<"Enter radius" <<endl;
    cin >> x;

    z = 3.14159 * (x * x);
  } else if (t == 3) {
    cout <<"Enter base" <<endl;
    cin >> x;

    cout <<"Enter height" <<endl;
    cin >> y;
    
    z = 0.5 * y * x;
  }

  cout <<endl <<z;
}

void vol() {
  double x;
  double y;
  double j;
  int t;
  double z;

  cout <<"Prisim (1)" <<endl;
  cin >> t;

  if (t == 1) {
    cout <<"Enter width" <<endl;
    cin >> x;

    cout <<"Enter length" <<endl;
    cin >> y;

    cout <<"Enter height" <<endl;
    cin >> j;

    z = x * y * j;
  }

  cout <<endl <<z;
}
