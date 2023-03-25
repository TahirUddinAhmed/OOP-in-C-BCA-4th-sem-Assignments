#include <iostream>
using namespace std;

class Set {
    int m, n;
    public:
    void input();
    void display();
    int largest();
};

// outside memeber class definition using resultion operator ::
// function: input() - take input from the user
void Set::input() {
    cout<<"Enter the value of m: ";
    cin>>m;
    cout<<"Enter the value of n: ";
    cin>>n;
}

// function: largest() - check the largest number
int Set::largest() {
    if(m > n) {
        return m;
    } else {
        return n;
    }
}

// function: display() - display the largest number
void Set::display() {
    cout<<"Largest number is : "<<Set::largest()<<endl;
}

int main() {
    Set s1;
    s1.input();
    s1.display();

    return 0;
}