#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 

int main() {
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
   int n,k;
   scanf("%d %d",&n,&k);

    int minN;
    string txt="";
    for (int i=1;i<=n;i++)
    {   int num;scanf("%d",&num);
        if(i%k==1&&i!=1)txt+=to_string(minN)+" ";

        if(i%k==1)minN=num;
        else minN=min(minN,num);
    }
    txt+=to_string(minN);
    printf("%s",txt.c_str());
   
 
    
}