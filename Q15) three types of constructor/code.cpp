#include <iostream>
#include <cstring>
using namespace std;

class excon {
	int age;
	char name[50];
	
	public:
		excon() {
			cout<<"In default constructor"<<endl;
			age = 0;
			strcpy(name, "Hello");
		}
		excon(int a, char n[50]) {
			cout<<"In personalized constructor"<<endl;
			age = a;
			for (int i = 0; i < 50; i++) {
				name[i] = n[i];
			}
		}
		
		excon(excon &x) {
			age = x.age;
			strcpy(name, x.name);
		}
		void print() {
			cout<<"Age: "<<age<<endl;
			cout<<"Name: "<<name<<endl;
		}
		
};

int main() {
	excon a;
	a.print();
	excon p(40, "Rohit");
	p.print();
	excon q(p);
	q.print();
	return 0;
	
}
