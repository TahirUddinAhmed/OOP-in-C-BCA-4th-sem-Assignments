#include <iostream>
using namespace std;

class scientist; // forward declaration

class manager {
  string name;
  int salary;
  public:
    friend void income_tax(manager, scientist);
};

class scientist {
  string name;
  int salary;
  public: 
    friend void income_tax(manager, scientist);
};

void income_tax(manager m, scientist s) {
    // input manager's data                                                 
    cout<<"Enter the manager name: ";
    cin>>m.name;
    cout<<"Enter manager's salary: ";
    cin>>m.salary;
    // input manager's data                                                 
    cout<<"Enter the scienctist name: ";
    cin>>s.name;
    cout<<"Enter scientist salary: ";
    cin>>s.salary;

    int total_income = m.salary + s.salary;
    double tax_rate = 0.1; // 10%
    double tax_amount = total_income * tax_rate;

    cout<<"total income: "<<total_income<<" Rupees"<<endl;
    cout<<"Tax amount: "<<tax_amount<<" Rupees"<<endl;
}

int main() {
   manager m1;
   scientist s1;

    // calling the friend function
    income_tax(m1, s1);

    return 0;
}