#include <bits/stdc++.h>
using namespace std;
long long bigmod1(long n,long long m,long long p)
{
    if(m==0) return 1;
    if(m%2==1) return (n%p*bigmod1(n,m-1,p)%p)%p;
    else return (bigmod1(n,m/2,p)%p*bigmod1(n,m/2,p)%p)%p;
}
int main() {
    long long B,P,M;
    while(scanf("%lld%lld%lld",&B,&P,&M)!=EOF)
    {
         printf("%lld\n",bigmod1(B,P,M));
    }
}
