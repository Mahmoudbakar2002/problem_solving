#include <bits/stdc++.h>
 
 
using namespace std;
 
int main() {
 
    int T;
    scanf("%d",&T);
    while(T--){
        int num;
        scanf("%d",&num);
        int n=0;
        while(num>0){
            if(num%2!=0)n++;
            num/=2;
        }
        n=(2*pow(2,n-1))-1;
        printf("%d\n",n);
    }
}