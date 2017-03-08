#include <iostream>

using namespace std;

int main()
{
    int x;
   cout << "Personibas tests" << endl << "kads dzivnieks tu esi " << "Atbildi ar 1 vai 2" << endl << endl;
   
   cout << "kads cilveks tu esi?" << endl << "1. kaku" << endl <<"2. sunu" << endl;
   cin >> x;
   if(x==1){
      cout << "labi" << endl;
      cout << "Vai tev patik reptili" << endl << "1. ja" << endl <<"2. ne" << endl; 
      cin >> x;
      if(x==1){
      cout << "tu esi brunurupucis" <<endl; 
   }else{
       cout << "tu esi kakis" << endl;
   
   }
   }else{
      cout << "labi" << endl;
      cout << "Vai tev patik mezs?" << endl << "1. ja" << endl <<"2. ne" << endl; 
      cin >> x;
      if(x==1){
       cout << "tu esi lacis" << endl;   
   }else{
      cout << "tu esi sunc" << endl;  
   }
   }
   return 0;
}

