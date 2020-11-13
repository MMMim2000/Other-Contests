#include<bits/stdc++.h>
#define rng 90000000
#define ll long long
bool prime[rng];
int num[rng];
void sieve()
{
    prime[1]=1;
    for(ll i=4;i<=rng;i+=2) prime[i]=1;
    for(ll i=3;i*i<=rng;i+=2)
    {
        ll k = 2*i;
        if(!prime[i])
        {
            for(ll j=i*i;j<=rng;j+=k)
            {
                prime[j]=1;
            }
        }
    }
    int cnt=1;
    num[cnt++]=2;
    for(int i=3;i<=rng;i+=2)
        if(!prime[i]) num[cnt++]=i;
}
int main()
{
    sieve();
    int t,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&k);
        printf("%d\n",num[k]);
    }
    return 0;
}
