#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,ar[10000],n,ans;
    cin>>n;
    getchar();
    string  s;
    while(n--)
    {
        getline(cin,s);
        stringstream ss(s);
        int k=0;
        while(ss>>ar[k++])
        ans=0;
        for(i=0; i<k; i++)
        {
            for(j=i+1; j<k-1; j++)
            {
                ans=max(ans,__gcd(ar[i],ar[j]));

            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
