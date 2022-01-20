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
int image[51][51];
int n;

int dfs(int x,int y){
    
    if(!image[x][y])return 0;
   // cout<<x<<"-"<<y<<endl;
    image[x][y]=0;
    for (int i = -1; i <= 1; i++)
    for (int j = -1; j <= 1; j++)
        if((i!=0||j!=0)&&(x+i>=0&&x+i<n)&&(y+j>=0&&y+j<n)){
            dfs(x+i,y+j);    
        }
    return 1;
}
int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);
    int IMAGENUM=1;    
    while (cin>>n){
        char c;
        for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++){
            cin >>c;
            image[i][j]=(c-'0'); 
        }
        int cnt=0;
        for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
           // cout<<"---------------\nEnter to :"<<i<<"-"<<j<<endl;
            cnt+=dfs(i,j);
        }
        printf("Image number %d contains %d war eagles.\n",IMAGENUM++,cnt);
        
    }
    
   
}

/*
input: 



output :

*/