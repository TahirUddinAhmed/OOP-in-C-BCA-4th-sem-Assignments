#include <iostream>
using namespace std;

int main() {
  // int to chars convertion
  // implicit type casting
  int n, numeric; 
  char ch, alpha; 

  cout<<"Enter a number\n: ";
  cin>>n;
  ch = n; // convert int to char(implicit)

  cout<<"\nyou entered : " <<n<<endl;
  cout<<"ascii value of "<<n<<" is: "<<ch<<endl;

  // chars to int convertion
  // explicit type casting
  cout<<"\nEnter a character\n: ";
  cin>>alpha;
  numeric = (int)alpha; // convert char to int(explicit)
  
  cout<<"\nyou entered : "<<alpha<<endl;
  cout<<"integer value of "<<alpha<<" is : "<<numeric<<endl;
  return 0;
}