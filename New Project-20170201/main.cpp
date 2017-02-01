#include <iostream>

using namespace std;

int main()
{
   double a;
   double b;
   double c;
   double d;
   double e;
   double v;
   cout << "kada tev videjaa lv?" << endl;
   cin >> a;
   cout << "kada tev videjaa eng?" << endl;
   cin >> b;
   cout << "kada tev videjaa mat?" << endl;
   cin >> c;
   cout << "kada tev videjaa geo?" << endl;
   cin >> d;
   cout << "kada tev videjaa hist?" << endl;
   cin >> e;
   v = (a+b+c+d+e)/5.0;
   cout << "tava videja atzime ir " << v << endl;
   
   if(v>8){
       cout << "malacis dabusi stipendiju" << endl;
   }else{
       cout <<"tev stipendija nepienakas" << endl;
   }
   return 0;
}

