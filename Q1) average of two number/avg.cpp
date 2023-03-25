#include <iostream>
using namespace std;

int main() {
    float num1, num2, sum, average;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;

    // sum of num1 and num2
    sum = num1 + num2;
    // average of both number
    average = sum/2;

    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<average<<endl;

    return 0;
}