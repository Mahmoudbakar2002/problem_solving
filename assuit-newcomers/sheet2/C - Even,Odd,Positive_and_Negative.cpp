        #include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 

int main() {
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
   int nums;
   scanf("%d",&nums);
   
   int odd=0,even=0,positive=0,negative=0;
   for (int i = 0; i < nums; i++)
   {
       int n;scanf("%d",&n);
       //cout<<(n&1);
       if(n>0)positive++;
       if(n<0)negative++;
       if(n&1==1)odd++;
       else even++;
   }
   printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,positive,negative);
   
   

}