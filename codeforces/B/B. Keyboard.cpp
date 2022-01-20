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

vector<pair<int,int>> shifts;
int n,m,x;
bool canWrite(pair<int ,int>key){
    for(auto sh:shifts){
        if(((key.first-sh.first)*(key.first-sh.first)
            +(key.second-sh.second)*(key.second-sh.second))
            <=x) return true;
                    
    }
    return false;
}

int main(){
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout); 
    //cout<<((char)('A'+32));

    vector<bool> capitalChars(26,false);
    vector<pair<int,int>> keys[26];
    n=SCNInt();m=SCNInt();x=SCNInt();
    x*=x;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++){
            char c;cin>>c;
            if(c>='a'&&c<='z')
                 keys[c-'a'].push_back({i,j});
            else 
                shifts.push_back({i,j});
        }
    

    for (int k=0;k<26;k++){
        int s=keys[k].size();
        for(int i=0;i<s&&!capitalChars[k];i++){
            capitalChars[k] =capitalChars[k]|| canWrite(keys[k][i]);
        }
    }
    
    int q=SCNInt();
    int cnt=0;bool valid=true;
    for (int i = 0; i < q&&valid; i++)
    {
       char c;cin>>c;
       if(c>='A'&&c<='Z'){
           valid=valid&(shifts.size()>0);
           if(!capitalChars[c-'A'])cnt++;
           c+=32;
       }
       valid=(valid&&!(keys[c-'a'].empty())); 
    }
    

    
      if(valid){
           printf("%d",cnt);
       }
       else printf("-1");          

    /* old solution : that show TLE*/
    // vector<pair<int,int>>keys[27];
    // int n=SCNInt(),m=SCNInt(),x=SCNInt();
    // REP(i,0,n)
    //     REP(j,0,m){
    //         char c;cin>>c;
    //         if(c=='S')keys[26].PB(mkpair(i,j));
    //         else keys[c-'a'].PB(mkpair(i,j));
    //     }
    // int q=SCNInt();
    // char txt[q];
    // scanf("%s",txt);
    // bool valid=true;
    // int number=0;
    // for (int i = 0; i < q&&valid; i++){
    //    char c=txt[i];
    //    if(c>='a'&&c<='z'){
    //        if(keys[c-'a'].size()<=0)valid=false;
    //    }
    //    else {
    //        c+=32;
    //        if(keys[c-'a'].size()<=0||keys[26].size()<=0){valid=false;break;}
           
    //            int mn=1<<30;
    //            for (auto h: keys[c-'a']){
    //                 for (auto j: keys[26]){
    //                     int dis=(h.first-j.first)*(h.first-j.first)+
    //                             (h.second-j.second)*(h.second-j.second);
    //                      mn=min(mn,dis);
    //                       if(mn<=x*x)break;       
    //                 }if(mn<=x*x)break; 
    //            }
    //         //    cout<<mn<<endl;
    //            if(mn>x*x)number++;
           
    //     }

       
    // }
    //   if(valid){
    //        printf("%d",number);
    //    }
    //    else printf("-1");          
   
}

/*
input: 
  012345678
0 qwertyuio
1 asdfghjkl
2 SzxcvbnmS

123456789012345
TQIKRWFOXHLYDOG
TQIKRWFOXHLYDOG




SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

output :

*/