#include<bits/stdc++.h>
#define sz 1000006
using ll = long long;
using namespace std;
bool cnt[sz];
void sieve()
{
    ll k;
    cnt[0]=1;
    cnt[1]=1;
    for(ll i=4;i<=sz;i+=2) cnt[i]=1;
    for(ll i = 3;i*i<=sz;i+=2)
    {
        k = 2*i;
        if(cnt[i]==0)
        for(ll j = i*i;j<=sz;j+=k)
        {
            cnt[j] = 1;
        }
    }
}
int main()
{
    sieve();
    ll n,x;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld",&x);
        ll r = sqrt(x);
        if(cnt[r]==0&&r*r==x) puts("YES");
        else puts("NO");
    }
    return 0;
}
