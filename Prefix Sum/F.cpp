#include<bits/stdc++.h>
using namespace std;
vector <long long> a,cs;
int main()
{
    //freopen("input.txt","r+",stdin);
    //freopen("c.txt","w+",stdout);
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        long long x;
        scanf("%lld",&x);
        a.push_back(x);
    }
    reverse(a.begin(),a.end());
    cs=a;
    cs.insert(cs.begin(),0);
    for(int i=1;i<=cs.size();i++){
        cs[i]+=cs[i-1];
    }
    int q;
    scanf("%d",&q);
    while(q--){
        int test;
        scanf("%d",&test);
        if(test==1){
            int l,r;
            scanf("%d%d",&r,&l);
            printf("%lld\n",cs[N-r+1]-cs[N-l]);
        }
        else{
            int x;
            scanf("%d",&x);
            long long y=cs[N];
            y+=x;
            cs.push_back(y);
            N++;
        }
    }
    return 0;
}
