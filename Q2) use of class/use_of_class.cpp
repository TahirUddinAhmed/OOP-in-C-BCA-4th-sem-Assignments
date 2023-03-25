#include <iostream>
using namespace std;

class Person {
    char name[30];
    int age;
    public:
     void getData() {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your age : ";
        cin>>age;
     }
     void display() {
        cout<<"\nname = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
     }
};

int main() {
    Person p1;
    p1.getData();
    p1.display();
    return 0;
}