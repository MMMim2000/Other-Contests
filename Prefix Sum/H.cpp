#include<bits/stdc++.h>
#define MAX	2147483647
using namespace std;
vector <int> h,cumsum;
int main()
{
    //freopen("input.txt","r+",stdin);
    //freopen("c.txt","w+",stdout);
    int n,k;
    scanf("%d%d",&n,&k);
    int s=n-k+1;
    cumsum.push_back(0);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        h.push_back(x);
        cumsum.push_back(x);
    }
    for(int i=1;i<=n;i++)
        cumsum[i]+=cumsum[i-1];
    int r,mini,mn=MAX;
    for(int j=0;j<s;j++)
    {
        mini=cumsum[j+k]-cumsum[j];
        if(mini<mn)
           {
               mn=mini;
               r=j+1;
           }
    }
    printf("%d\n",r);
    return 0;
}
