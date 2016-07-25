/*
輸入一數字，判斷其能否被11整除並輸出結果
*/
#include <iostream>

using namespace std;

int main()
{
   int a;//宣告被除數
   while(cin>>a)//當輸入變數時執行下列函式
   {
       if(a==0)break;//當變數為0時中止函式
       int b=a%11;//宣告餘數
       int c=a/11;//宣告商
       if(b==0 && c!=0)cout<<a<<" is a multiple of 11."<<endl;//判斷餘數為零，且商不為零，輸出數字被整除訊息
       if(b!=0) cout<<a<<" is not a multiple of 11."<<endl;//判斷餘數不為零，輸出數字無法被整除訊息
   }
   
   return 0;
}
