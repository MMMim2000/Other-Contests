#include<bits/stdc++.h>
#define sz 100005
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
    int n,x=0;
    scanf("%d",&n);
    if(n>2)
    printf("2\n");
    else
        printf("1\n");
    for(int i=2;i<=n+1;i++)
    {
        printf("%d%c",cnt[i]+1," \n"[i==n+1]);
    }
    return 0;
}
