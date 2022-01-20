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
    vector<vector<double>> rectangles;
    char c;
    while (cin>>c &&c=='r'){
        double x;vector<double>rec;
        for (int i = 0; i < 4; i++){
            cin>>x;rec.push_back(x);
        }
        
        // double x1,y1,x2,y2;cin>>x1>>y1>>x1>>y2;
        //double ar[2][2]={{x1,y1},{x2,y2}};
        
        rectangles.push_back(rec); 
    }
    double x,y;int k=0;;
    while (cin>>x>>y&&x!=9999.9&&y!=9999.9){
        bool found=false;k++;
        for (int i =0;i<rectangles.size();i++){
            
            if(x>rectangles[i][0]&&x<rectangles[i][2]
             &&y<rectangles[i][1]&&y>rectangles[i][3]){
                found=true;
                cout<<"Point "<<(k)<<" is contained in figure "<<(i+1)<<"\n";
            }
        }
        if(!found){
            cout<<"Point "<<k<<" is not contained in any figure\n";
            }
    }
    
   
}

/*
input: 



output :

*/