#include <iostream>
using namespace std;

int main() {
   int n,y=1,x=1,m=0;
   cin >>n;
   if(n>=2) {
      for(int i=1; i<=n; i++){
         cout << y << endl;
         y=m+x;
         x=m;
         m=y;
      }
      
   }      
   else {
      cout << "errore";
   }   
   
   return 0;
}
