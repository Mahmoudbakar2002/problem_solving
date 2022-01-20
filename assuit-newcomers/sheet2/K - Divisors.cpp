#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
    // freopen("main.in", "r", stdin);
    // freopen("main.out", "w", stdout);    
   int num;
   scanf("%d",&num);

    for (int i = 1; i <= num; i++)
        if(num%i==0)
            printf("%d\n",i);
        
    
  
}

