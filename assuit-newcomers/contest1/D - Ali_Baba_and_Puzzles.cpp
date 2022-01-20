#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 

int main() {
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
   ll a,b,c,d;
   scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
   if(
      a*b+c==d||
      a*b-c==d||
      a+b*c==d||
      a-b*c==d||
      a+b-c==d||
      a-b+c==d
      )
        printf("YES");
    else  printf("NO");  
 
    
}