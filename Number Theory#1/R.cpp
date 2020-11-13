#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,gcd=0;
    scanf("%d",&n);
    int a[n+1];
    for(int i = 1;i<=n;i++)
    {
        scanf("%d",a+i);
    }
    gcd = a[1];
    for(int i = 2;i<=n;i++)
    {
        gcd=__gcd(gcd,a[i]);
        if(gcd==1) break;
    }
    if(gcd==1) printf("%d\n",n);
    else printf("-1\n",n);
}
int main()
{
//    freopen("input.txt","r+",stdin);
//    freopen("output.txt","w+",stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
    return 0;
}
