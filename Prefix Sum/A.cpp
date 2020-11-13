#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N,Q,sum=0;
    vector <long long> v,s;
    s.push_back(0);
    scanf("%lld",&N);
    while(N--){
        int t;
        scanf("%d",&t);
        v.push_back(t);
        sum+=t;
        s.push_back(sum);
    }
    scanf("%lld",&Q);
    while(Q--){
        int i,j;
        scanf("%d%d",&i,&j);
        printf("%lld\n",s[j+1]-s[i]);
    }
    return 0;
}
