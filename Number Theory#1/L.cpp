#include<bits/stdc++.h>
using namespace std;
vector <long long> dvs;
int main()
{
    long long n,k;
    scanf("%lld %lld",&n,&k);
    for(long long i=1;i*i<=n;i++)
    {
        if(i*i==n){
            dvs.push_back(i);
            continue;
        }
        else if(n%i==0)
        {
            dvs.push_back(i);
            dvs.push_back(n/i);
        }
    }
    sort(dvs.begin(),dvs.end());
    int l = dvs.size();
    if(l<k) printf("-1\n");
    else
    {
        printf("%lld\n",dvs[k-1]);
    }
    return 0;
}
