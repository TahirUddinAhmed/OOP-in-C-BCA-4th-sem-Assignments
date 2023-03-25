#include <iostream>
using namespace std;

void swap1(int x,int y) 
{
    int temp1;
    temp1 = x;
    x = y;
    y = temp1;
}

void swap2(int &p,int &q)
{
    int temp2;
    temp2 = p;
    p = q;
    q = temp2;
}

int main() 
{
    int a=5,b=7;
    swap1(a,b);
    cout<<"\nFor swap1 a & b values are : "<<a<<" and "<<b<<endl;
    swap2(a,b);
    cout<<"For swap2 a & b values are : "<<a<<" and "<<b;
    return 0;
}