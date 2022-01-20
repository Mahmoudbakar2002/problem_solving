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
vector<int>steps;
string path="@IEHOVA#";
char road[10][10];
int n,m;

bool movein(int index,int i,int j){
    if(path[index]!=road[i][j])return false;
    if(index==7&&path[index]==road[i][j])return true;

    if(j+1<m&&movein(index+1,i,j+1))
        steps.push_back(1);
    else if(j-1>=0&&movein(index+1,i,j-1))
        steps.push_back(2);
    else if(i-1>=0&&movein(index+1,i-1,j))
        steps.push_back(3);
    return true;
}


int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
    int t=SCNInt();
    while (t--){
        steps.clear();
        scanf("%d %d",&n,&m);
        for (int i = 0; i < n; i++)
           for (int j = 0; j < m; j++)
               cin>>road[i][j];
        bool f=false;
         for (int i = 0; i < m&&!f; i++){
             f=movein(0,n-1,i);
         }
         int i=steps.size()-1;
            if(steps[i]==1)printf("right");
            else if(steps[i]==2)printf("left");
            else printf("forth");
        for(i=i-1;i>=0;i--){
            if(steps[i]==1)printf(" right");
            else if(steps[i]==2)printf(" left");
            else printf(" forth");
        }
        printf("\n");
        
    }
    
   
}

/*
input: 



output :

*/