#include <iostream>
using namespace std;

class scientist; // forward declaration

class manager {
  string name;
  int salary;
  public:
    void getdata() {
        cout<<"Enter the name of manager: ";
        cin>>name;
        cout<<"Enter his salary: ";
        cin>>salary;
    } 
    friend void income_tax(manager, scientist);
};

class scientist {
  string name;
  int salary;
  public: 
    void getdata() {
        cout<<"Enter the scientist name: ";
        cin>>name;
        cout<<"Enter his salary: ";
        cin>>salary;
    }
    friend void income_tax(manager, scientist);
};

void income_tax(manager m, scientist s) {
    int total_income = m.salary + s.salary;
    double tax_rate = 0.1; // 10%
    double tax_amount = total_income * tax_rate;

    cout<<"total income: "<<total_income<<" Rupees"<<endl;
    cout<<"Tax amout: "<<tax_amount<<" Rupees"<<endl;
}

int main() {
   manager m1;
   scientist s1;

    // get data
    m1.getdata(); 
    s1.getdata();

    // calling the friend function
    income_tax(m1, s1);

    return 0;
}