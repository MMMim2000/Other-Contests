#include<bits/stdc++.h>
using namespace std;
#define sz 1000006
int prime[sz/64+2];
int num[sz];
#define status(x) (prime[x>>6]& (1<<((x&63)/2)))
#define marked(x) (prime[x>>6]|=(1<<((x&63)/2)))
void sieve()
{
    for(int i=3;i*i<=sz;i+=2)
    {
        int k=i*2;
        if(!status(i))
        {
            for(int j=i*i;j<=sz;j+=k)
            {
                marked(j);
            }
        }
    }
    int cnt=1;
    num[cnt++]=2;
    for(int i=3;i<=sz;i++)
    {
        if(!status(i)) num[cnt++]=i;
    }
}
bool tst(int n)
{
    return n>1&&(n==2||((n&1)&&!status(n)));
}
int main()
{
    sieve();
    int n,x,y,ans1,ans2;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        ans1 = ans2 = x = y = 0;
        if(n&1)
        {
            x = n-2;
            if(x>2&&tst(x))
            {
                ans1 = 2;
                ans2 = x;
            }
        }
        else
        {
            for(int k=1;k<n;k++)
            {
                y = num[k];
                x = n-y;
                if(tst(y)&&tst(x))
                {
                    ans1 = y;
                    ans2 = x;
                    break;
                }
            }
        }
        if(ans1&&ans2)
            printf("%d:\n%d+%d\n",n,ans1,ans2);
        else printf("%d:\nNO WAY!\n",n);
    }
	return 0;
}
