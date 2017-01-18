#include <iostream>

using namespace std;

int main()
{
    
    int x;
    int y;
    int z;
    int c;
    int a;
    int b;
    int m;
    
    x = 12;
    z = 13;
    y = 14;
    c = 2*x + 3*y + z;
    a = (x*y + x*z)*2;
    b = x*x*(y-z);
    m = (x+y) / z;
    
   cout <<"2*x + 3*y + z ir " << c << endl;   
   cout << "(x*y + x*z)*2 ir "<< a << endl;  
   cout << "x*x*(y-z) ir "<< b << endl; 
   cout << "(x+y) / z ir "<< m << endl;
   
   return 0;
}
