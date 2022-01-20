/*
Problem Name: 
Problem Link: 
Author: Mahmoud Atef (Bakar)
solved Date : /11/2021
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define loop(i,a,b) for(int i=a;i<b;i++)
#define revloop(i,a,b) for(int i=a;i>b;i--)
#define all(x) x.begin(),x.end()
#define push(i) push_back(i)
#define mkpair(i) make_pair(i)
#define mkheap(i) make_heap(i)
#define SCNInt() ({int x;scanf("%d",&x);x;})
#define SCNLL() ({ll x;scanf("%lld",&x);x;})
#define SCNChar() ({char x;scanf("%c",&x);x;})
// #define SCNInt(x) ({scanf("%d",&x);})
// #define SCNLL(x)  scanf("%lld",&x);
// #define SCNChar(x) scanf("%c",&x);

typedef long long ll;

int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
    ll l=SCNLL(),r=SCNLL();
    ll a,b,c;
    
    for (a = l; a <=r-2; a++)
      for (b =a+1; b <=r-1; b++){
        if(__gcd(a,b)!=1)continue;
        for (c =b+1; b <=r; b++)
            if(__gcd(b,c)==1&&__gcd(a,c)!=1){
                printf("%lld %lld %lld",a,b,c);
                return 0;
            }
      }
        
    printf("-1");
}

/*
input: 



output :

*/