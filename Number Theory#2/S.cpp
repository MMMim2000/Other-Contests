#include<bits/stdc++.h>
#define rng 100000000
#define ll long long
using namespace std;
int num[rng/64+2];
#define status(x) (num[x>>6]&(1<<((x&63)/2)))
#define prime(x) (num[x>>6]|=(1<<((x&63)/2)))
vector <pair<ll,ll>> prm(rng);
void sieve()
{
    for(ll i=3;i*i<=rng;i+=2)
    {
        if(!status(i))
        {
            ll k= i*2;
            for(ll j=i*i;j<=rng;j+=k)
            {
                prime(j);
            }
        }
    }
}
bool tst(ll n)
{
    return n>1&&(n==2||((n&1)&&!status(n)));
}
void position()
{
    ll row,col;
    row = col = 1;
    prm[2] = {row,col};
    col++;
    for(ll i = 3;i<rng;i+=2)
    {
        if(col>row)
        {
            row++;
            col = 1;
        }
        if(tst(i))
        {
            prm[i] = {row,col};
            col++;
        }
    }
}
int main()
{
    sieve();
    position();
    ll t,m;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&m);
        if(tst(m))
            printf("%lld %lld\n",prm[m].first,prm[m].second);
            //printf("%lld\n",m);
        else printf("-1\n");
    }
    return 0;
}
