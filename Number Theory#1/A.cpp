#include <bits/stdc++.h>
using namespace std;
void solve()
{
   long long a,b,c,h,l,w,s;
   scanf("%lld %lld %lld",&a,&b,&c);
   s = a+b+c;
   h = max(a,max(b,c));
   l = min(a,min(b,c));
   w = s-h-l;
   if(h*h==(l*l+w*w))
      printf("yes\n");
   else
      printf("no\n");
}
int main()
{
   int T;
   scanf("%d",&T);
   for(int i = 1;i <= T;i++)
   {
      printf("Case %d: ",i);
      solve();
   }
	return 0;
}
