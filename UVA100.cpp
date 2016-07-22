#include <iostream>

using namespace std;

int cycle(int n);
int count;
int main()
{
   int x,y;
   cin>>x>>y;
   int max_xy=max(x,y);
   int min_xy=min(x,y);
   int a[max_xy-min_xy];
   int number;
   for(int i=min_xy;i<=max_xy;i++)
   {
       count=1;
       a[i]=cycle(i);
   }
   for(int i=min_xy;i<max_xy;i++)
   {
       number=max(a[i],a[i+1]);
   }
   cout<<number<<endl;
   
   return 0;
}

int cycle(int n)
{
    if(n==1)return 1;
    if(n%2!=0 && n!=1){n=n*3+1;return 1+cycle(n);}
    if(n%2==0 && n!=1){n=n/2;return 1+cycle(n);}
}

