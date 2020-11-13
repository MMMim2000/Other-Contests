#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
char s[202],y[]={"divisible\n"},n[]={"not divisible\n"};
long long number,sum;
void solve()
{
    sum = 0;
    scanf("%s ",s);
    scanf("%lld",&number);
    if(number<0) number*=-1;
    int i=0,l=strlen(s);
    if(s[0]=='-') i=1;
    for(;i < l;i++)
    {
        sum = sum*10 + (s[i]-48);
        if(sum >= number)
            sum = sum%number;
    }
}
int main()
{
    int T;
    scanf("%d",&T);
    for(int i = 1;i <= T;i++)
    {
        solve();
        printf("Case %d: ",i);
        if(sum) printf("%s",n);
        else printf("%s",y);
    }
    return 0;
}
