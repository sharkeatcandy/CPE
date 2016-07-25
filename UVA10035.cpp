/*
輸入兩數字，判斷其每一位數相加後會進位的數量，並輸出結果
*/
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
   char a[11];//宣告陣列存一數字
   char b[11];//宣告陣列存另一數字
   int la,lb;//宣告位數
   int number;//宣告相同位數
   int max;//宣告最後位數
   while(cin>>a>>b)//當輸入變數時執行下列函式
   {
    if(a[0]=='0' && b[0]=='0')break;//當兩數字皆為0時停止函式
    int count=0;//宣告進位次數
    la=strlen(a);//設定位數
    lb=strlen(b);//設定位數
    if(la-lb>=0){number=(la-lb);max=la;}//判斷共有幾位數需要運算
    else {number=(lb-la);max=lb;}
        for(int i=max;i>=number;i--)//進行運算
        {
            if((a[i]+b[i]-96)>=10)count++;//進位一次count+1
        }
    if(count==0)cout<<"No carry operation."<<endl;//判斷count並輸出結果
    else cout<<count<<" carry operation."<<endl;
   
   }
   return 0;
}
