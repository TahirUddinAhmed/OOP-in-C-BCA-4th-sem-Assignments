#include <iostream>
using namespace std;

int main() {
  // int to chars convertion
  // implicit type casting
  int n = 97; 
  char ch = n; // implicit type casting from int to char
  
  // chars to int convertion
  // explicit type casting
  char alpha = 'm'; 
  int numeric = (int)alpha; // explicit type casting from char to int

  cout<<"value of n : " <<n<<endl;
  cout<<"value of ch : "<<ch<<endl;
  cout<<"\nvalue of alpha : "<<alpha<<endl;
  cout<<"value of numeric: "<<numeric<<endl;
  return 0;
}