#include <iostream>
using namespace std;

struct person {
    char name[20];
    int age;
};


void display(person q) {
    cout<<"name: "<<q.name<<" age: "<<q.age;
}

int main() {
    person p;
    cout<<"Enter name \n:";
    cin>>p.name;
    cout<<"Enter the age\n:";
    cin>>p.age;

    display(p);
    return 0;
}