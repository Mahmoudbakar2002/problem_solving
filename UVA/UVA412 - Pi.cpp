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
    // freopen(".main.in", "r", stdin);
    // freopen(".main.out", "w", stdout);    
    int n;
    do{
        n=SCNInt();if(n==0)return 0;
        int arr[n];
        for (int i = 0; i < n; i++)
            arr[i]=SCNInt();
        int co=0;
        int t=0;
        //bool flag=true;    
        for (int i = 0; i < n; i++)
            for (int j = i+1; j < n; j++){
                t++;
                if(__gcd(arr[i],arr[j])==1)co++;}
        //  cout<<co<<endl<<t<<endl;   
        if(co==0){
            printf("No estimate for this data set.\n");
        }else {
            printf("%.6f\n",sqrt(t*6.0/co));
        }   
    }while(n!=0);
   
}

/*
input: 



output :

*/