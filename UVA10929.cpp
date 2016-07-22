#include <iostream>

using namespace std;

int main()
{
   int a;
   while(cin>>a){
       if(a==0)break;
       int b=a%11;
       int c=a/11;
       if(b==0 && c!=0)cout<<"ok"<<endl;
       if(b!=0) cout<<"qq"<<endl<<b<<endl<<c<<endl;
   }
   
   return 0;
}