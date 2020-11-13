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
    for(int i=3;i<=sz;i+=2)
    {
        if(prime[i]==0)
            num[j++]=i;
    }
}
int main()
{
    //freopen("input.txt","r+",stdin);
    //freopen("output.txt","w+",stdout);
    sieve();
    int n;
	while(1){
        scanf("%d",&n);
        if(n==0) break;
        for(int i=1;;i++)
        {
            int x = n-num[i];
            if(prime[x]==0)
            {
                printf("%d = %d + %d\n",n,num[i],x);
                break;
            }
        }
	}
	return 0;
}
