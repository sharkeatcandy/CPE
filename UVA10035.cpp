#include <iostream>
#include <string.h>

using namespace std;

int main()
{
   char a[11];
   char b[11];
   int la,lb,number,max;
   while(cin>>a>>b)
   {
    if(a[0]=='0' && b[0]=='0')break;
    int count=0;
    la=strlen(a);
    lb=strlen(b);
    if(la-lb>=0){number=(la-lb);max=la;}
    else {number=(lb-la);max=lb;}
        for(int i=max;i>=number;i--)
        {
            if((a[i]+b[i]-96)>=10)count++;
        }
    if(count==0)cout<<"No carry operation."<<endl;
    else cout<<count<<" carry operation."<<endl;
   
   }
   return 0;
}