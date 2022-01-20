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
    vector<int> students[101];
    int used[101];
    int n;

    pair<int ,int> dfs(bool team,int parent,int index){
        pair<int ,int > res=mkpair(0,0);
        if(used[index]!=0)return res;

        // cout<<"visit :"<<team<<" , "<<parent<<" , "<<index<<endl;
        used[index]=(team)?1:2;
        for (int i : students[index])
            if(used[i]==used[index])
                return res;
        
        if(team)res.first++;
        else res.second++;

        for (int i : students[index]){
            if(i==parent)continue;
            // cout<<"\tinside for (i="<<i<<" , "<<used[i]<<endl;
        
            pair<int,int> y=dfs(!team,index,i);
            res.first+=y.first;
            res.second+=y.second;
        }
        
        return res;
    }
    int main(){
        // freopen("main.in", "r", stdin);
        // freopen("main.out", "w", stdout);    
        n=SCNInt();
        for (int i = 0; i < n; i++)
            used[i]=0;    
        int m=SCNInt();
        for (int i = 0; i < m; i++){
            int a=SCNInt(),b=SCNInt();
            students[a-1].push_back(b-1);
            students[b-1].push_back(a-1);
        }
        
        pair<int,int> team=mkpair(0,0);

        for (int i = 0; i < n; i++){
            if(used[i]!=0)continue;
            pair<int,int> ti=dfs(0,-1,i);
            // cout<<ti.first<<" - "<<ti.second<<endl;
            if(team.first<team.second){
                team.first+=max(ti.first,ti.second);
                team.second+=min(ti.first,ti.second);
            }else {
                team.first+=min(ti.first,ti.second);
                team.second+=max(ti.first,ti.second);    
            }
        }
        // cout<<team.first<<" "<<team.second<<endl;
        int rx=abs(team.first-team.second);
        printf("%d",rx+(n-team.first-team.second));

    }

    /*
    input: 



    output :

    */