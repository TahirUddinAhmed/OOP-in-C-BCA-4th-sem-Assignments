#include <iostream>
using namespace std;

class xyz {
    int a, sum;
    public:
     void getData(int);
     void add(xyz, xyz);
};

void xyz::getData(int b) {
    a = b;
}

void xyz::add(xyz s3, xyz s4) {
    sum = s3.a + s4.a;
    cout<<"the sum is : "<<sum<<endl;
}

int main() {
    xyz s1, s2, s;
    s1.getData(1);
    s2.getData(2);

    s.add(s1, s2);

    return 0;
}