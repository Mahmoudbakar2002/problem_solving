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
    int t=SCNInt();
    while(t--){
        int ax[2],ay[2],bx[2],by[2];
        scanf("%d %d %d %d %d %d %d %d",
                &ax[0],&ay[0],&ax[1],&ay[1],
                &bx[0],&by[0],&bx[1],&by[1]);
        int resx[2]={-1,-1},resy[2]={-1,-1};
        
        if(ax[0]>=bx[0]&&ax[0]<bx[1]){
            resx[0]=ax[0];
            resx[1]=min(ax[1],bx[1]);
        }else if(ax[1]>bx[0]&&ax[1]<=bx[1]){
            resx[1]=ax[1];
            resx[0]=max(ax[0],bx[0]);
        }else if(bx[0]>=ax[0]&&bx[0]<ax[1]){
            resx[0]=bx[0];
            resx[1]=min(bx[1],ax[1]);
        }else if(bx[1]>ax[0]&&bx[1]<=ax[1]){
            resx[1]=bx[1];
            resx[0]=max(ax[0],bx[0]);
        }


        if(ay[0]>=by[0]&&ay[0]<by[1]){
            resy[0]=ay[0];
            resy[1]=min(ay[1],by[1]);
        }else if(ay[1]>by[0]&&ay[1]<=by[1]){
            resy[1]=ay[1];
            resy[0]=max(ay[0],by[0]);
        }else if(by[0]>=ay[0]&&by[0]<ay[1]){
            resy[0]=by[0];
            resy[1]=min(by[1],ay[1]);
        }else if(by[1]>ay[0]&&by[1]<=ay[1]){
            resy[1]=by[1];
            resy[0]=max(ay[0],by[0]);
        }
        if(resx[0]==-1||resy[0]==-1)
            printf("No Overlap\n");
        else 
            printf("%d %d %d %d\n",resx[0],resy[0],resx[1],resy[1]);

        if(t>0)printf("\n");

        

    }
   
}

/*
input: 



output :

*/