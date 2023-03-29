#include <iostream>
using namespace std;

class sample {
  int a, b;
  friend void print(sample);
};

void print(sample s) {  // s is an object
    cout<<"Enter the first number: ";
    cin>>s.a;
    cout<<"Enter the second number:";
    cin>>s.b;

    cout<<"values are :----\n";
    cout<<"A: "<<s.a<<" and b:"<<s.b<<endl;
}

int main() {
    sample num1;
    print(num1);
    return 0;
}