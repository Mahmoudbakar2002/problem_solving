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
#define mkpair(i,j) make_pair(i,j)
#define mkheap(i) make_heap(i)
#define SCNInt() ({int x;scanf("%d",&x);x;})
#define SCNLL() ({ll x;scanf("%lld",&x);x;})
#define SCNChar() ({char x;scanf("%c",&x);x;})
// #define SCNInt(x) ({scanf("%d",&x);})
// #define SCNLL(x)  scanf("%lld",&x);
// #define SCNChar(x) scanf("%c",&x);

typedef long long ll;
int n,k;

ll is_valid(ll v){
    ll num=v;
    ll sum=v;
    while(num>0){
        num/=k;
        sum+=num;    
    }
    return sum>=n;
}
ll bs(ll l,ll r){
    ll mid;
    while(l<r){
        mid=(r+l)/2;
        if(is_valid(mid)){
            r=mid;
        }else l=mid+1;
    }
    return r;
}


int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
    n=SCNInt();
    k=SCNInt();
//    cout<<is_valid(256);
//    cout<<(1LL<<31);
   ll res=bs(0,1LL<<32);

   printf("%lld",res);
}

/*
input: 

747 2


output :
376
*/