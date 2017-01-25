#include <iostream>

using namespace std;

int main()

{
    
int x;
int y;
int a;
int b;
int c;
int d;

   cout << "ievadi x" << endl;
   cin >> x;
   cout << "ievadi y" << endl;
   cin >> y;

   a = y + 3;
   b = y - 2;
   c = y*5;
   d = x/y;


   cout << "x | y | darbiba  | rezultats" << endl;
   cout << x << "| " << y << " | rez=y+3  |" << " rez=" << a << endl;
   cout << x << "| " << y << " | rez=y-2  |" << " rez=" << b << endl;
   cout << x << "| " << y << " | rez=y*5  |" << " rez=" << c << endl;
   cout << x << "| " << y << " | rez=x/y  |" << " rez=" << d << endl;
   return 0;
}


