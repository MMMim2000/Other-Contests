#include<bits/stdc++.h>
using namespace std;
#define sz 200005
int cumsum[sz];
int main()
{
    //freopen("input.txt","r+",stdin);
    //freopen("c.txt","w+",stdout);
    int n,k,q,l,r,a,b,j=0;
    scanf("%d%d%d",&n,&k,&q);
    while(n--){
        scanf("%d%d",&l,&r);
        cumsum[l]++;cumsum[r+1]--;
    }
    for(int i=1;i<sz;i++){
        cumsum[i]+=cumsum[i-1];
    }
    for(int i=0;i<sz;i++){
        if(cumsum[i]>=k) cumsum[i]=1;
        else cumsum[i]=0;
    }
    for(int i=1;i<sz;i++){
        cumsum[i]+=cumsum[i-1];
    }
    while(q--){
        scanf("%d%d",&b,&a);
        printf("%d\n",cumsum[a]-cumsum[b-1]);
    }
    return 0;
}
