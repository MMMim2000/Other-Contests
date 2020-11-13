#include<bits/stdc++.h>
using namespace std;
const int sz = 200005;
int a[sz],b[sz];
void solve()
{
    int n,k,cnt=0,tmp=0,border=0;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }//8 6 1 2 4 1 2 4 1 2
    for(int i=2;i<n;i++){
        if(a[i]>a[i-1]&&a[i+1]<a[i])
            b[i]++;
    }
    for(int i=1;i<n;i++){
        b[i]+=b[i-1];
    }
    for(int i=1;i<=n-k+1;i++){
        if(b[i+k-2]-b[i]>tmp){
            tmp=b[i+k-2]-b[i];
            border=i;
        }
    }
    if(!border) border=1;
    printf("%d %d\n",tmp+1,border);
    memset(b,0,sizeof(b));
}
int main()
{
    //freopen("input.txt","r+",stdin);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
    return 0;
}
