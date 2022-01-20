#include <bits/stdc++.h>
 
 
using namespace std;
 
int main() {
    do{
        int n,m;
        scanf("%d %d",&n,&m);
        if(n>m)swap(n,m);
        if(n<=0||m<=0)return 0;

        int sum=0;
        for (int i = n; i <= m; i++)
        {
            printf("%d ",i);
            sum+=i;
        }
        printf("sum =%d\n",sum);
    } while(1);
}