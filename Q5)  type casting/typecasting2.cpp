#include <iostream>
using namespace std;

int main() {

  int n, numeric, count;; 
  char ch, alpha, str[10] = "john";
  string alphaNum = "153 peter";
  
  
// int to chars convertion
  cout<<"Enter a number\n: ";
  cin>>n;
  ch = n; // convert int to char(implicit)

  cout<<"\nyou entered : " <<n<<endl;
  cout<<"ascii value of "<<n<<" is: "<<ch<<endl;

  // chars to int conversion
  cout<<"\nEnter a character\n: ";
  cin>>alpha;
  numeric = (int)alpha; // convert char to int(explicit)
  
  cout<<"\nyou entered : "<<alpha<<endl;
  cout<<"integer value of "<<alpha<<" is : "<<numeric<<endl;

   // work to int conversion
   cout<<"Word to integer conversion:-"<<endl;
   for(int i = 0; str[i] != '\0'; i++) {
        count = str[i];
        cout<<count<<" ";
    }

    // string to int conversion using stoi() function
    int x = stoi(alphaNum);
    cout<<"\nalphanum: "<<alphaNum<<endl;
    cout<<"x: "<<x<<endl;
  return 0;
}