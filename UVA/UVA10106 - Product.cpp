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
    // char c;

    string x,y;
    while (cin>>x>>y){
        vector<int>num1,num2,result((x.size()+y.size()-1),0);
        for (int i = x.size()-1; i >= 0; i--)
            num1.push_back((x[i]-'0'));
        
        for (int i = y.size()-1; i >= 0; i--)
            num2.push_back((y[i]-'0'));
        
        for (int i = 0; i < num1.size(); i++)
            for (int j = 0; j < num2.size(); j++)
                result[i+j]+=(num1[i]*num2[j]);
    
        int carry=0;
        for (int i = 0; i < result.size(); i++){
            result[i]+=carry;
            carry=0;
            if(result[i]>9){
                carry=result[i]/10;
                result[i]=result[i]%10;
            }
        }
        while(carry>0){
            if(carry<10){
                result.push_back(carry);
                carry=0;
            }
            else{
                result.push_back(carry%10);
                carry=carry/10;
            }    
        }
        int i = result.size()-1;
        while (i>0&&result[i]==0)
            i--;
        
        for (; i>=0; i--)
            putchar(result[i]+'0');
        putchar('\n');
            
            
    }
}

/*
input: 



output :

*/