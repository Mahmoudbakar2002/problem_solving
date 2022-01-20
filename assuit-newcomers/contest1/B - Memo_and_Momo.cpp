#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 

int main() {
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
   ll a,b,k;
   scanf("%lld %lld %lld",&a,&b,&k);
   if(a%k==0&&b%k==0)
    printf("Both");
   else if(a%k==0)
    printf("Memo");
   else if(b%k==0)
    printf("Momo");
   else
    printf("No One");
   
    
}