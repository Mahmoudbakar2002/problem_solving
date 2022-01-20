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

ll n,m,a,b;
ll group[5];

ll lcm(ll a,ll b){
    return (a*b)/__gcd(a,b);
}
ll solve(ll sign,ll index,ll ltc,ll num){
    if(index==5){
        return sign*(num/ltc);
    }
    return solve(-1*sign,index+1,lcm(ltc,group[index]),num)+
            solve(sign,index+1,ltc,num);
}
int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
    int t=SCNInt();
    while(t--){
        n=SCNLL();
        m=SCNLL();
        a=SCNLL();
        b=SCNLL();

        for (ll i = 0; i < 5; i++)
        {
            group[i]=a+(i*b);           
        }
        

        ll res=solve(1,0,1,m)-solve(1,0,1,n-1);
        
        printf("%lld\n",res);
        
    }
   
}

/*
input: 



output :

*/