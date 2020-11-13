#include<bits/stdc++.h>
using ll = long long;
int test(int n)
{
    if(n%2==0&&n!=2) return 0;
    for(ll i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    //freopen("input.txt","r+",stdin);
    //freopen("output.txt","w+",stdout);
    int n;
	scanf("%d",&n);
	if(test(n)) printf("1\n");
	else if(n%2==0) printf("2\n");
	else if(test(n-2)) printf("2\n");
	else printf("3\n");
	return 0;
}
