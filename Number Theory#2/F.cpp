#include<bits/stdc++.h>
#define rng 1000000000
#define ll long long
using namespace std;
int isprm(ll n)
{
    if(n<2) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(ll i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll m,n;
        scanf("%lld%lld",&m,&n);
        for(ll i=m;i<=n;i++)
        {
            if(isprm(i)==1)
                printf("%lld\n",i);
        }
        puts("");
    }
    return 0;
}
