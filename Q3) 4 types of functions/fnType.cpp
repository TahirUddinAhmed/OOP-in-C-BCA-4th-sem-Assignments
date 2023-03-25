#include <iostream>
using namespace std;

void display(); // no return type and no arguments
void sum(int a, int b); // no return type and with arguments
float pi(); // with return type and no argument
int mul(int a, int b); // with return type and with arguments

int main() {
    int x, y;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;

    display();
    sum(x, y);
    float r = pi();
    cout<<"\nValue of pi is " << r;
    int m = mul(x, y);
    cout<<"\nMultiplication of the both number is "<<m;
    return 0;
}

void display() {
    cout<<"The sum of the two number is ";
}

void sum(int a, int b) {
    cout << a+b;
}

// pi function
float pi() {
    float p = 3.1412;
    return p;
}

int mul(int a, int b) {
    int c = a * b;

    return c;
}