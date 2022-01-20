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
    double isData;
    while(cin>>isData){
        double line1[2][2],line2[2][2];
        line1[0][0]=isData;
        cin>>line1[0][1];
        for (int j = 0; j < 2; j++)
            cin>>line1[1][j];
        
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin>>line2[i][j];

        double xc,yc,x1,x2,y1,y2;        
        for (int i = 0; i < 2; i++)
        {   for (int j = 0; j < 2; j++)
                if(line1[i][0]==line2[j][0]&&line1[i][1]==line2[j][1]){
                    xc=line1[i][0];yc=line1[i][1];
                    x1=line1[(i+1)%2][0];y1=line1[(i+1)%2][1];
                    x2=line2[(j+1)%2][0];y2=line2[(j+1)%2][1];
                }    
        }
        // cout<<xc<<" "<<x1<<" "<<x2<<"\n";
        // cout<<yc<<" "<<y1<<" "<<y2<<"\n";

        double x=(x1+x2-xc),y=y1+y2-yc;
        printf("%0.3f %0.3f\n",x,y);
}
}

/*
input: 



output :

*/