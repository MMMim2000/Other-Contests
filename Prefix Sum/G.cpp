#include<bits/stdc++.h>
using namespace std;
vector <long long> a,sum;
void solve()
{
    int N;
    a.push_back(0);
    sum.push_back(0);
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        long long x;
        scanf("%lld",&x);
        a.push_back(x);
        sum.push_back(x);
    }
    sort(a.begin(),a.end());
    for(int i=1;i<=N;i++){
        a[i]+=a[i-1];
        sum[i]+=sum[i-1];
    }
}
int main()
{
    //freopen("input.txt","r+",stdin);
    //freopen("c.txt","w+",stdout);
    solve();
    int t;
    scanf("%d",&t);
    while(t--){
        int type,l,r;
        scanf("%d%d%d",&type,&l,&r);
        if(type==1)
            printf("%lld\n",sum[r]-sum[l-1]);
        else
            printf("%lld\n",a[r]-a[l-1]);
    }
    return 0;
}
