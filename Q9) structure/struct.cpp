// Q9
#include <iostream>
using namespace std;

struct employee {
    int e_no;
    char e_name[20];
    float basic,hra,da;

    void getData() {
        cout<<"Enter the name: ";
        cin>>e_name;
        cout<<"Enter employee no: ";
        cin>>e_no;
        cout<<"Enter basic, hra, da of employee: ";
        cin>>basic>>hra>>da;
    }

    float calculate();
    void display();
};

float employee::calculate() {
    float net;
    net = basic+hra+da;

    return net;
}

void employee::display() {
    cout<<"Employee details are - "<<endl;
    cout<<"Name : "<<e_name<<endl;
    cout<<"Employee No : "<<e_no<<endl;
}

int main() {
    float temp1, temp2;
    struct employee s1, s2;
    cout<<"**********First employee*******"<<endl;
    s1.getData();
    temp1 = s1.calculate();
    s1.display();
    cout<<"Net salary is : "<<temp1<<endl;
    cout<<"**********Second employee*******"<<endl;
    s2.getData();
    temp2 = s2.calculate();
    s2.display();
    cout<<"Net salary is : "<<temp2<<endl;
    return 0;
}