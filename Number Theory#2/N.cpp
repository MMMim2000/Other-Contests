#include<bits/stdc++.h>
#define rng 10000001
#define ll long long
using namespace std;
bool prime[rng];
vector <int> num;
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
    num.push_back(2);
    for(int i=3;i<rng;i+=2)
    {
        if(!prime[i]) num.push_back(i);
    }
}
int main()
{
    sieve();
    int t,n,x,y,c;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        c = x = y = 0;
        if(n==4)
        {
            c=1;
            printf("Case %d: %d\n",i,c);
            continue;
        }
        for(int k=1;;k++)
        {
            x = num[k];
            y = n-x;
            if(x>y) break;
            if(prime[y]==0)
            {
                c++;
            }
        }
        printf("Case %d: %d\n",i,c);
    }
	return 0;
}
