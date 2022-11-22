#include <iostream>
using namespace std;

int main() {
   
   int a=1;
   int b=1;
   int risultato=0;
   int n=0; cin >> n;
   if (n<2) {
      cout << "errore";
   }else{
      cout << "1" << endl;
      cout << "1" << endl;
   for (int i=0; i<= (n-3); i++) {
      risultato=a+b;
      cout << risultato << endl;
      a=b;
      b=risultato;
   }
   }
  
   return 0;
}
