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
bool fs=true;
vector<int> task[101];
bool did[101];
void dfs(int index){
    if(did[index])return;
    did[index]=true;
    for (int i = 0; i < task[index].size(); i++){
        if(did[task[index][i]])continue;
        dfs(task[index][i]);
    }
    if(!fs)printf(" ");
    fs=false;
    printf("%d",(index+1));
}

int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
    int n,m;
    do {
        scanf("%d %d",&n,&m);
        if(n==0&&m==0)return 0;
        fs =true;
        for (int i = 0; i < n; i++){
           task[i].clear();
           did[i]=false;
        }
        
        
        for (int i = 0; i < m; i++){
            int a,b;scanf("%d %d",&a,&b);
            task[b-1].push_back(a-1);
        }

        for (int i = 0; i < n; i++){
            dfs(i);
        }
        
      printf("\n");  
    }while(true);
    
   
}

/*
input: 



output :

*/