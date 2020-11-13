#include<bits/stdc++.h>
#define rng 10000
#define ll long long
bool prime[rng];
int num[rng];
int noldbach[rng*2];
void sieve()
{
    prime[0]=1;
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
    {
        if(!prime[i]) num[cnt++]=i;
    }
    int k;
    for(int i=1;i<cnt;i++)
    {
        k = num[i]+num[i+1]+1;
        if(prime[k]==0)
            noldbach[k]=1;
    }
    for(int i=1;i<=rng;i++)
        noldbach[i]+=noldbach[i-1];
//    for(int i=1;i<=27;i++)
//        printf("%d\n",noldbach[i]);
}
int main()
{
    sieve();
    int n,k;
    scanf("%d %d",&n,&k);
    if(noldbach[n]>=k) puts("YES");
    else puts("NO");
    return 0;
}
