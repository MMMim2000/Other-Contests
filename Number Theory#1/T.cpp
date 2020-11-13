#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,r1=0,r2=0;
    scanf("%lld",&n);
    if(n<3) printf("%lld\n",n);
    else if(n==4) printf("12\n");
    else
    {
        if(n%2==1)
        {
            r2 = n*(n-1)*(n-2);

        }
        else
        {
            if(n%3==0)
            {
                r2 = (n-1)*(n-2)*(n-3);
            }
            else r2 = n*(n-1)*(n-3);
        }
        printf("%lld\n",r2);
    }
    return 0;
}
