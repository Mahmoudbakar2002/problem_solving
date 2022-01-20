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
    int n=SCNInt(),k=SCNInt();
    double arr[n][2];
    for (int i = 0; i < n; i++){
        arr[i][0]=SCNInt();
        arr[i][1]=SCNInt();
    }
    double last[2]={arr[0][0],arr[0][1]};
    double res=0;
    for (int i = 1; i < n; i++){
       res+=sqrt((arr[i][0]-last[0])*(arr[i][0]-last[0])+
                    (arr[i][1]-last[1])*(arr[i][1]-last[1]));
       last[0]=arr[i][0];
       last[1]=arr[i][1];             
    }
    res=res/50.0*k;
    printf("%.9f",res);
    
    
   
}

/*
input: 



output :

*/