#include<bits/stdc++.h>
#define ind(n) scanf("%d",&n)
#define ins(s) scanf("%s",s)
#define inf(f) scanf("%f",&f)
#define inlf(lf) scanf("%lf",&lf)
#define inll(l) scanf("%lld",&l)
#define inllu(l) scanf("%llu",&l)
#define inc(ch) scanf("%c",&ch)
#define outd(n) printf("%d",n)
#define outs(s) printf("%s",s)
#define outsp() printf(" ")
#define outnl() printf("\n")
#define outf(f) printf("%f",f)
#define outlf(lf) printf("%lf",lf)
#define outll(l) printf("%lld",l)
#define outllu(l) printf("%llu",l)
#define outc(ch) printf("%c",ch)
#define REP(i,a,b,c) for(int i=a;i<=b;i+=c)
using namespace std;
long long sum,csm[100005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,k,start=0;
    ind(n),ind(k);
    int a[n+1];
    a[0]=0;
    bool t[n+1];
    for(int i=1;i<=n;i++)
        ind(a[i]);
    for(int i=1;i<=n;i++){
        ind(t[i]);
        if(t[i]){
            sum+=(long long)a[i];
        }
        else{
            csm[i]= a[i];
        }
    }
    REP(i,1,n,1) csm[i]+=csm[i-1];
    REP(i,k,n,1){
        int temp = csm[i]-csm[i-k];
        start=max(temp,start);
    }
    outll(sum+start);
    outnl();
    return 0;
}
