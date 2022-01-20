#include <bits/stdc++.h>
 
 
using namespace std;
 
int main() {
 
    int T;
    scanf("%d",&T);
    while(T--){
        int num;scanf("%d",&num);
        if(num==0)printf("0");
        while(num>0){
            int x=num%10;
            printf("%d ",x);
            num/=10;
        }
        printf("\n");
    }
}