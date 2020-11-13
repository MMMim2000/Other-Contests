#include<bits/stdc++.h>
#define rng 13000000
#define ll long long
using namespace std;
int num[rng/64+2];
#define status(x) (num[x>>6]&(1<<((x&63)/2)))
#define prime(x) (num[x>>6]|=(1<<((x&63)/2)))
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
int main()
{
    sieve();
    int n,c;
    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;
        else if(tst(n))
        {
            puts("0");
        }
        else
        {
            for(int i = n;!tst(i);i++)
            {
                c++;
            }
            for(int i = n;!tst(i);i--)
            {
                c++;
            }
            printf("%d\n",c);
        }
        c = 0;
    }
    return 0;
}
