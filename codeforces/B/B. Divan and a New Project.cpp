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

int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
    int T=SCNInt();
    while(T--){
        int n=SCNInt();
        vector<pair<int,int>> arr(n);
        for (int i = 0; i < n; i++)
        {   int x=SCNInt();
            arr[i]=mkpair(x,i);
        }
       sort(arr.begin(),arr.end(),greater<pair<int,int>>());
        int arrEnd[n];
        ll res=0;
        for (int i = 0; i < n; i+=2)
        {
            arrEnd[arr[i].second]=(i/2)+1;
            res+=2*((ll)arr[i].first)*((i/2)+1);
        }
        
        for (int i = 1; i < n; i+=2)
        {
            arrEnd[arr[i].second]=-((i/2)+1);
            res+=(ll)2*arr[i].first*((i/2)+1);
        }
        
    
        
        printf("%lld\n0",res);
        for (int i = 0; i < n; i++)
        {
            printf(" %d",arrEnd[i]);
        }
        printf("\n");
        
    }
   
}

/*
input: 



output :

*/