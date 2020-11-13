#include<bits/stdc++.h>
using namespace std;
long long fact(int n)
{
    if(n<2) return 1;
    else return n*fact(n-1);
}
int main()
{
    long long a,b;
    scanf("%lld %lld",&a,&b);
    b = min(a,b);
    printf("%lld\n",fact(b));
    return 0;
}
