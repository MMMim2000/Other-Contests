#include<bits/stdc++.h>
using namespace std;
int main()
{
      int i,j,sum=0,n=0;
            while(scanf("%d",&n)==1){
                  if(n==0)
                  break;

                        sum=0;
                        for(i=1;i<n;i++){
                              for(j=i+1;j<=n;j++){
                                    sum+=__gcd(i,j);
                              }
                        }
                        printf("%d\n",sum);
            }

      return 0;
}
