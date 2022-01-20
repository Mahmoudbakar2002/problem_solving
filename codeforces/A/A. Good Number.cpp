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
    string arr[n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    int number =0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i].size()<=k)continue;
        vector<bool>digits(k+1,false);
        for (int j = 0; j < arr[i].size(); j++)
            if(arr[i][j]-'0'<=k)
                digits[(arr[i][j]-'0')]=true;
        for (int j = 0; j <=k; j++)
            if(!digits[j]){
                number--;
                break;
                }
                
        number++;
    }
    
    printf("%d",number);
   
}

/*
input: 



output :

*/