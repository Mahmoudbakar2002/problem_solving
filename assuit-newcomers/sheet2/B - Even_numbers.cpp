        #include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 

int main() {
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
   int x;
   scanf("%d",&x);
   
   if(x<2)printf("-1");
   for (int i = 2; i <= x; i+=2)
   {
       printf("%d\n",i);
   }
   
   

}