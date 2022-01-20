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
    int n=SCNInt(),t=SCNInt(),k=SCNInt(),d=SCNInt();
    int one=ceil((double)n/k)*t;
    int st=t,nd=d;
    n-=k;//int c=ceil((double)n/k);
    while(n>0){
        if(nd<st)
            nd+=t;
        else st+=t;    
        n-=k;
    }

    // st+=(c/2)*t;
    // nd+=(c/2)*t;
    // // cout<<nd<<"--"<<st<<"\n";
    // if(c%2==1){
    //     if(nd<st)nd+=t;
    //     else st+=t;
    // }
    //st*=t;nd*=t;
    int two=max(st,nd);
    // cout<<one<<"  "<<two<<endl;    
    // cout<<st<<"  "<<nd<<endl;

    printf((two<one)?"YES":"NO");
}

/*
input: 



output :

*/