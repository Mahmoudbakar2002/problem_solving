#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 

int main() {
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
   int t;
   scanf("%d",&t);
   while(t--){
        int num;
        scanf("%d",&num);
        ll n=1;
        for (int i = 2; i <= num; i++)
        {
                n*=i;
        }
        printf("%lld\n",n);
   }  

}