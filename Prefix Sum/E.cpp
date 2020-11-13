#include<bits/stdc++.h>
using namespace std;
int c1[1003],c2[1003];
void solve()
{
    string s;
    cin>>s;
    //cout<<s<<endl;
    int l=s.length();
    //cout<<l<<endl;
    for(int i=0;i<l;i++){
        for(int j=0;j<=i;j++){
            if(s[j]=='0') c1[i]++;
        }
        for(int j=i+1;j<l;j++){
            if(s[j]=='1') c1[i]++;
        }
    }
    for(int i=0;i<l;i++){
        for(int j=0;j<=i;j++){
            if(s[j]=='1') c2[i]++;
        }
        for(int j=i+1;j<l;j++){
            if(s[j]=='0') c2[i]++;
        }
    }
    sort(c1,c1+l);
    sort(c2,c2+l);
    printf("%d\n",min(c1[0],c2[0]));
    memset(c1,0,sizeof(c1));
    memset(c2,0,sizeof(c2));
}
int main()
{
    //freopen("input.txt","r+",stdin);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
    return 0;
}
/*
10010101010101110
*/
