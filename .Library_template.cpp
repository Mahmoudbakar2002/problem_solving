/* ==================================
    calaculate power algorithm:exponintail 
====================================**/
ll power(ll x,ll y){
    if(y==0)return 1;
    ll result=1;
    while(y>0){
        if(y&1) result*=x;
        x*=x;
        y>>1;
    }
    return result;
}

/*=====================================
       Binarry search
=======================================**/