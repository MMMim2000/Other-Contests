#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,cnt=0,q,l,r;
    string s;
    vector <int> v;
    v.push_back(0);
    cin>>s;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]) cnt++;
        v.push_back(cnt);
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d%d",&l,&r);
        printf("%d\n",v[r-1]-v[l-1]);
    }
    return 0;
}
