#include <iostream>
using namespace std;

int area(int,int);
double area(double, double);
float area(float);

int area(int l, int b) {
   int ar;
   ar = l *  b;
   return ar;
}

double area(double h, double b) {
    double ar;
    ar = 0.5*h*b;
    return ar;
}

float area(float r) {
    float ar;
    ar = 3.14*r*r;
    return ar;
}

int main() {
   int a1;
   float a2, a3;
   a1 = area(10, 12);
   cout<<"Area of rectangle is : "<<a1<<endl;
   a2 = area(4.8, 6.5);
   cout<<"Area of trigle is : "<<a2<<endl;
   a3 = area(5.5);
   cout<<"Area of circle with radius 5.5 is "<<a3<<endl;
    return 0;
}