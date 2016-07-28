/*
輸入一數字，判斷其能否被11整除並輸出結果
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
   char a[1000];//宣告被除數
   while(cin>>a)//當輸入變數時執行下列函式
   {
       if(a[0]=='0')break;//當變數為0時中止函式
       int s=strlen(a);
       int x=0;
       int y=0;
       int max_xy=0;
       int min_xy=0;
       int number=0;
       if(s<2)
       {
       		number=a[0]-48;
       }
       else if(s%2==0)
       {
       		for(int i=s-1;i>0;i-=2)
       		{
       			x+=a[i]-48;y+=a[i-1]-48;
       		}
       		max_xy=max(x,y);
       		min_xy=min(x,y);
       		number=max_xy-min_xy;
       }
       else
       {
       		for(int i=s-1;i>0;i-=2)
       		{
       			x+=a[i]-48;y+=a[i-1]-48;
       		}
       		x+=a[0]-48;
       		max_xy=max(x,y);
       		min_xy=min(x,y);
       		number=max_xy-min_xy;
       }
       if(number==0 || number%11==0)cout<<a<<" is a multiple of 11."<<endl;//判斷餘數為零，且商不為零，輸出數字被整除訊息
       if(number!=0 && number%11!=0) cout<<a<<" is not a multiple of 11."<<endl;//判斷餘數不為零，輸出數字無法被整除訊息
   }
   
   return 0;
}
