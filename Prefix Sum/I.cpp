#include<bits/stdc++.h>
const int ssz=100005;
using namespace std;
long long a[ssz+1],qr[ssz+1],b[ssz+1];
void cumsum(long long arr[],int len)
{
    for(int i=1;i<=len;i++)
        arr[i]+=arr[i-1];
}
void opp(int arr[],int l,int r, int d){
    for(int i=l;i<=r;i++){
        arr[i]+=d;
    }
}
int main()
{
//    freopen("input.txt","r+",stdin);
    int sz,op,q,x,y;
    scanf("%d%d%d",&sz,&op,&q);
    for(int i=1;i<=sz;i++){
        scanf("%lld",a+i);
    }
    int l[op+1],r[op+1],d[op+1];
    for(int i=1;i<=op;i++){
        scanf("%d%d%d",l+i,r+i,d+i);
    }
    for(int i=0;i<q;i++){
        scanf("%d%d",&x,&y);
        qr[x]++;
        qr[y+1]--;
    }
    cumsum(qr,ssz);
    for(int i=1;i<=op;i++){
        if(qr[i]){
            b[l[i]]+=d[i]*qr[i];
            b[r[i]+1]-=d[i]*qr[i];
        }
    }
    cumsum(b,ssz);
    for(int i=1;i<=sz;i++)
        b[i]+=a[i];
    for(int i=1;i<=sz;i++)
        printf("%lld ",b[i]);
    puts("");
    return 0;
}
