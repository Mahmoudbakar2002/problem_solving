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
        string  x,y;cin>>x>>y;
        string right="",left="";
        int i=0;

        while (x[i]!='|'&&i<x.size())
            left+=x[i++];
        while (i<x.size()-1)
            right+=x[++i];

        for (int i = 0; i < y.size(); i++)
        
            if(left.size()<right.size())
                left+=y[i];
            else right+=y[i];
        if(left.size()!=right.size())cout<< "Impossible";
        else cout<<left<<"|"<<right;
            
    }

    /*
    input: 



    output :

    */