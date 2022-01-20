#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 

int main() {
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
   ll a,b,c;
   scanf("%lld %lld %lld",&a,&b,&c);
   ll m=min(a,min(b,c));
   if(a==m||c==m) printf("%lld",m); 
    else{
        a-=b;c-=b;
        a/=2;
        m+=min(a,c);
        printf("%lld",m);
    }
}