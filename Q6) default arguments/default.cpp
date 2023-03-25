#include <iostream>
using namespace std;

void fun1(int a, int b, int c = 3);

int main() {
    cout<<"First round : "<<endl;
    fun1(1, 2);
    cout<<"Second round : "<<endl;
    fun1(1, 2, 4);

    return 0;
}

void fun1(int x, int y, int z) {
    cout<<"x = "<<x<<" y = "<<y<<" z= "<<z<<endl;
}