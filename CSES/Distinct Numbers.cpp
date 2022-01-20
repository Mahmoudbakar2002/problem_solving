/*
Problem Name: 
Problem Link: https://cses.fi/problemset/result/3104345/
Author: Mahmoud Atef (Bakar)
solved Date : 9/11/2021
*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define loop(i,a,b) for(int i=a;i<b;i++)
#define revloop(i,a,b) for(int i=a;i>b;i--)

typedef long long ll;



int main(){
   set<int> list;
   int n;
    scanf("%d",&n);
    loop(i,0,n){
        int x;scanf("%d",&x);
        list.insert(x);
    }
   cout<<list.size();
}

/*
input: 
5
2 3 2 2 3

output :
2
*/