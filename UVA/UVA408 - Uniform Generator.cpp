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
    int step,seed;
    while(cin>>step>>seed){
        vector<bool>space(seed,false);
        space[0]=true;//space[step%seed]=true;
        int counter=1;
        int current=step%seed;
        while (!space[current]){
            space[current]=true;
            current=(current+step)%seed;
            counter++;
        }
         printf("%10d%10d    ",step,seed);
        if(counter==seed){
            printf("Good Choice\n\n");
        }else {
            printf("Bad Choice\n\n");
        }
        
    }
   
}

/*
input: 



output :

*/