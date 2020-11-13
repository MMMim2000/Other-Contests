#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    //freopen("c.txt","w+",stdout);
    scanf("%d",&T);
    while(T--){
        long long N,Q,sum=0;
        vector <long long> v,s;
        s.push_back(0);
        scanf("%lld%lld",&N,&Q);
        while(N--){
            int t;
            scanf("%d",&t);
            v.push_back(t);
            sum+=t;
            s.push_back(sum);
        }
        while(Q--){
            int i,j;
            scanf("%d%d",&i,&j);
            printf("%lld\n",s[j+1]-s[i]);
        }
        puts("");
    }
    return 0;
}
