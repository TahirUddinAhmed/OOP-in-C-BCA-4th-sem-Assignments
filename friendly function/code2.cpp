#include <iostream>
using namespace std;

class test2; // forward declaration

class test1 {
    int a;
    public:
     void geta() {
        cout<<"Enter value a:";
        cin>>a;
     }
     friend void big(test1, test2);
};

class test2 {
    int b;
    public:
      void getb() {
        cout<<"Enter b value: ";
        cin>>b;
      }
    friend void big(test1, test2);
};

void big(test1 n1, test2 n2) {
    if(n1.a > n2.b) {
        cout<<"a is big"<<endl;
    }else if(n1.a < n2.b) {
        cout<<"b is big"<<endl;
    }else {
        cout<<"Both are equal"<<endl;
    }
}


int main() {
    test1 t1;
    test2 t2;
    t1.geta(); // reading the value of a
    t2.getb(); // reading the value of b

    big(t1, t2);
    return 0;
}