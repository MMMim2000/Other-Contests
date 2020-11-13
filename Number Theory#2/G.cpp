#include<bits/stdc++.h>
#define sz 3003
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
    int n,x=0,y=0,k=0;
    scanf("%d",&n);
    k = sqrt(n);
    for(int i=5;i<=n;i++)
    {
        if(cnt[i])
        {
            for(int j=2;j*j<=i;j++)
            {
                if(i%j==0&&cnt[j]==0&&j*j!=i) x++;
                if (i%(i/j)==0&&cnt[i/j]==0) x++;
            }
            if(x==2) y++;
        }
        x=0;
    }
    printf("%d\n",y);
    return 0;
}
