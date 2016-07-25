/*
輸入二數字作為範圍，將範圍內所有數字進行下列運算
：若為偶數則除2，若為奇數則乘3+1，直到此數字變為1停止
計算花了幾個步驟使數字變為1
輸出範圍內數字花了最多的步驟數量
ex input 1 10
ex output 20
*/
#include <iostream>

using namespace std;

int cycle(int n);//宣告循環函式
int main()
{
   int x,y;//宣告範圍變數
   while(cin>>x>>y)//輸入範圍
   {
   int max_xy=max(x,y);//判斷最大範圍
   int min_xy=min(x,y);//判斷最小範圍
   int number=0;//宣告最多步驟變數
   int count;//宣告計數函數
    for(int i=min_xy;i<=max_xy;i++)//將範圍內每個數字都進行計算循環
    {
       count=cycle(i);//將數字丟進循環函式，將步驟存進計數函數
       if(count>number)number=count;//將最多步驟數存進number變數
    }
   cout<<number<<endl;//輸出最多步驟
   }
   return 0;
}

int cycle(int n)
{
    if(n==1)return 1;//當數字等於1時步驟數+1並停止循環
    if(n%2!=0 && n!=1){n=n*3+1;return 1+cycle(n);}//當數字是奇數時步驟數+1，數字乘3加1後繼續循環
    if(n%2==0 && n!=1){n=n/2;return 1+cycle(n);}//當數字是偶數時步驟數+1，數字除2後繼續循環
}

