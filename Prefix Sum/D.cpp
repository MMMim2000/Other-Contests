#include<bits/stdc++.h>
using namespace std;
int const sz=1000009;
int prm[sz],dgtprm[sz],num[sz],cnt,c=0;
bool x[sz],sumdigit[sz];
void sieve()
{
    for(int i=4;i<=sz;i+=2)
        x[i]=1;
    for(int i=3;i*i<=sz;i+=2)
        if(x[i]==0)
            for(int j=i*i;j<=sz;j+=2*i)
                x[j]=1;
}
void solve()
{
    for(int i=2;i<=sz;i++){
        if(!x[i]){
            int temp=i,dsum=0;
            while(temp>0){
                dsum+=temp%10;
                temp/=10;
            }
            if(!x[dsum])
            num[i]=1;
        }
        num[i]+=num[i-1];
    }
}
int main()
{
    sieve();
    solve();
    //freopen("input.txt","r+",stdin);
    //freopen("c.txt","w+",stdout);
    int t,p,q;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&p,&q);
        printf("%d\n",num[q]-num[p-1]);
    }
	return 0;
}
