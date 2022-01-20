/*
Problem Name: 
Problem Link: 
Author: Mahmoud Atef (Bakar)
solved Date : /12/2021
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define REP(i,a,b) for(int i=a;(a<b&&i<b)||(a>b&&i>b);i+=(a<b)?1:-1)
// #define IREP(i,a,b) for(int i=a;i>b;i--)
#define all(x) x.begin(),x.end()
#define PB(i) push_back(i)
#define mkpair(i,j) make_pair(i,j)
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
    char pans[3][3];
    REP(i,0,3)scanf("%s",pans[i]);
    pair< char,char> maxes[3];
    REP(i,0,3){
        if(pans[i][1]=='>')
             maxes[i]=mkpair(pans[i][0],pans[i][2]);
        else maxes[i]=mkpair(pans[i][2],pans[i][0]);
    }
    char mx=0,mn=0;
    REP(i,0,3){
        REP(j,i+1,3){
            if(maxes[i].first==maxes[j].first)mx=maxes[i].first;
            if(maxes[i].second==maxes[j].second)mn=maxes[i].second;
        }
    }
    

    if(mx==0||mn==0){
        printf("Impossible");return 0;
    }
    printf("%c",mn);
    REP(i,0,3){
        char c=('A'+i);
        if(c!=mx&&c!=mn)printf("%c",c);
    }
    printf("%c",mx);
    


    
}

/*
input: 



output :

*/