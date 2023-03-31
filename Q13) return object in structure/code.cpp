#include <iostream>
using namespace std;

int sub(int num1, int num2) {
  return num1 - num2;
}

void mul(int n1, int n2, int n3) {
   int multiply = n1 * n2 * n3;
   cout<<"result = "<<multiply;
}

int main() {
 cout<<"Hiiiiii"<<endl;
 cout<<"Bye"<<endl;

 int a = 19, b = 50;

 cout<<"addition of "<<a<<" and "<<b<<" is "<<a + b<<endl;
 printf("Addition of %d and %d is %d\n", a, b, a+b);


 // if 

//  if(a > 18) {
//    cout<<"GREATER THAN 18"<<endl;
//  } else {
//    cout<<"You are out!"<<endl;
//  }

 for(int i = 1; i <= a; i++) {
    cout<<i<<endl;
 }
 int p, q, x;
 cout<<"Enter a\n: ";
 cin>>p;
 cout<<"Enter b\n: ";
 cin>>q;
 x = sub(p, q);
 cout<<"Subtraction function() value : "<<x<<endl;


 /// call the mul() function
 int number1, number2, number3;
 cout<<"Enter three number\n: ";
 cin>>number1>>number2>>number3;
 mul(1, 2, 3);
 return 0;
}