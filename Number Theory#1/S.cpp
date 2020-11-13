#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll B(char b[], ll a){
    int mod = 0;
    for(ll i = 0 ;b[i] ; i++){
        mod = mod*10 + b[i] - 48;
        mod = mod % a;
    }
    return mod;
}
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        ll a;
        char b[300];
        scanf("%lld %s",&a , b);
        if(a == 0){
            printf("%s\n" , b);
            continue;
        }
        printf("%lld\n",__gcd(a , B(b , a)));
    }
    return 0;
}
