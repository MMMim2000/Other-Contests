#include<cstdio>
#define sz 100005
using namespace std;
int cnt[sz];
void sieve()
{
    int k;
    cnt[0]=1;
    cnt[1]=1;
    for(int i=4;i<=sz;i+=2) cnt[i]=1;
    for(int i = 3;i*i<=sz;i+=2)
    {
        k = 2*i;
        if(cnt[i]==0)
        for(int j = i*i;j<=sz;j+=k)
        {
            cnt[j] = 1;
        }
    }
    for(int i=0;i<=sz;i++) cnt[i]=!cnt[i];
    for(int i = 1;i<=sz;i++)
        cnt[i]+=cnt[i-1];
}
int main()
{
    sieve();
    int A,B;
    while(~scanf("%d %d",&A,&B))
    {
        if(A==-1&&B==-1) break;
        if(A==0) A=1;
        printf("%d\n",cnt[B]-cnt[A-1]);
    }
    return 0;
}
