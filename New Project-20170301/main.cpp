#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
   cout << "ievadi 3 ciparus" << endl; 
   cin >> a;
   cin >> b;
   cin >> c;
   
   
   
   if(a>c && a>b){
       if(b>c){
           cout << a << b << c << endl;
       }else{
           cout << a << c << b << endl;
       }
   }else{
       if(b>c){
           if(a>c){
              cout << b << a << c << endl;
           }else{
               cout << b << c << a << endl;
           }
       }else{
           if(b>a){
               cout << c << b << a << endl;
           }else{
               cout << c << a << b << endl;
           }
       }
          
       
   }
   
   return 0;
}

