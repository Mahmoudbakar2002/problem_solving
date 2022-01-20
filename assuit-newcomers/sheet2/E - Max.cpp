        #include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 

int main() {
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
   int nums;
   scanf("%d",&nums);
   
   int maxNum=0;
   for (int i = 0; i < nums; i++)
   {
       int n;scanf("%d",&n);
       maxNum=max(maxNum,n);
   }
   printf("%d",maxNum);
   
   

}