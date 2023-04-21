#include <iostream>
using namespace std;

int main() {
   int n,m,b,c,d;
   cin >>n;
   if(n>=2) {
      m=n;
      b=n+m;
      c=m+b;
      d=b+c;
      cout << m << endl;
      cout << b << endl;
      cout << c << endl;
      cout << d << endl;
      
   }      
   else {
      cout << "errore";
   }   
   
   return 0;
}
