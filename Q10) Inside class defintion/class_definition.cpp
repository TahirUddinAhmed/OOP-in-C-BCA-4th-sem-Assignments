#include <iostream>
using namespace std;

class calculator {
    int x,y;
    public:
      void add(int c, int d) {
        x = c+d;
        cout<<"The sum is : "<<x<<endl;
      }
      void mul(int,int);
};

void calculator::mul(int p, int q) {
    y = p*q;
    cout<<"The product is : "<<y<<endl;
}

int main() {
    calculator c1;

    int a, b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    c1.add(a, b);
    c1.mul(a, b);
    return 0;
}