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
       int s=strlen(a);//宣告位數
       int x=0;//宣告奇數位數總和
       int y=0;//宣告偶數位數總和
       int max_xy=0;//宣告總和最大值
       int min_xy=0;//宣告總和最小值
       int number=0;//宣告總和相減後值
       if(s<2)//當僅有一位數時執行函式
       {
       		number=a[0]-48;//總和相減值直接等於輸入值
       }
       else if(s%2==0)//當位數為偶數位數時執行函式
       {
       		for(int i=s-1;i>0;i-=2)//迴圈執行算式
       		{
       			x+=a[i]-48;y+=a[i-1]-48;//奇數偶數位分別加值
       		}
       		max_xy=max(x,y);//判斷奇偶數哪個總和較大
       		min_xy=min(x,y);//判斷奇偶數哪個總和較大
       		number=max_xy-min_xy;//計算總和相減值
       }
       else//當位數為奇數位數時執行函式
       {
       		for(int i=s-1;i>0;i-=2)//迴圈執行算式
       		{
       			x+=a[i]-48;y+=a[i-1]-48;//奇數偶數位分別加值
       		}
       		x+=a[0]-48;
       		max_xy=max(x,y);//判斷奇偶數哪個總和較大
       		min_xy=min(x,y);//判斷奇偶數哪個總和較大
       		number=max_xy-min_xy;//計算總和相減值
       }
       if(number==0 || number%11==0)cout<<a<<" is a multiple of 11."<<endl;//判斷總和相減為零或可被11整除，輸出數字被整除訊息
       if(number!=0 && number%11!=0) cout<<a<<" is not a multiple of 11."<<endl;//判斷總和相減不為零，輸出數字無法被整除訊息
   }
   
   return 0;
}
