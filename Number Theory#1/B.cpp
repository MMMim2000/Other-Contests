#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    long long n,m,k;
    scanf("%lld",&n);
    if(n<3)
    {
      printf("-1\n");
      return 0;
    }
    if(n%2 == 1)
    {
         m = ((n*n)-1)/2;
         k = ((n*n)+1)/2;
    }
      else
      {
         n/=2;
         m = ((n*n)-1);
         k = ((n*n)+1);
      }
      printf("%lld %lld\n",m,k);
    return 0;
}
