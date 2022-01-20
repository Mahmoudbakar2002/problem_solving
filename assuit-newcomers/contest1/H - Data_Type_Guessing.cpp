#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 

int main() {
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
   ll a,b,c;
   scanf("%lld %lld %lld",&a,&b,&c);
   ll nom=a*b;
   if(nom%c!=0)printf("double");
   else{
       nom/=c;
       printf(nom>INT_MAX?"long long":"int");
   }

}