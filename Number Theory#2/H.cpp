#include<bits/stdc++.h>
#define sz 20000000
using ll = long long;
bool prime[sz];
int cnt,sum,num[sz],twin[sz];
void sieve()
{
    int k;
    for(int i = 4;i<=sz;i+=2) prime[i]=1;
    for(ll i=3;i*i<=sz;i++)
    {
        k = 2*i;
        if(prime[i]==0)
        for(int j=i*i;j<=sz;j+=k)
            {
                prime[j]=1;
            }
    }
    int j = 1;
    for(int i=3;i<sz-2;i+=2)
    {
        if(prime[i]==0&&prime[i+2]==0)
            num[j++]=i;
    }
}
int main()
{
    sieve();
    int n;
	while(~scanf("%d",&n))
		printf("(%d, %d)\n",num[n],num[n]+2);
	return 0;
}
