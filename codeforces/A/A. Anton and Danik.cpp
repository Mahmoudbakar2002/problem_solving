/*
Problem Name: 
Problem Link: 
Author: Mahmoud Atef (Bakar)
solved Date : /11/2021
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define REP(i,a,b) for(int i=a;i<b;i++)
#define nREP(i,a,b) for(int i=a;i>b;i--)
#define all(x) x.begin(),x.end()
#define PB(i) push_back(i)
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
   int n=SCNInt();n++;
   int anton=0,dek=0; 
    while(n--){
        char c=SCNChar();
        if(c=='A')anton++;
        else if(c=='D') dek++;
    }
    if(anton>dek) printf("Anton");
    else if(dek>anton)printf("Danik");
    else printf("Friendship");
}

/*
input: 



output :

*/