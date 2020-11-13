#include<bits/stdc++.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int result[10005]={0};
        result[0] = 1;
        int N = 1,carry = 0,val = 0,j;
        for(int i=1;i<=n;i++)
        {
            for(j=0;j<N;j++)
            {
                val = result[j]*i+carry;
                result[j] = val%10;
                carry = val/10;
            }
            while(carry>0)
            {
                result[N] = carry%10;
                carry/=10;
                N++;
            }
        }
        printf("%d!\n",n);
        for(int i = N-1;i>=0;i--)
            printf("%d",result[i]);
        puts("");
    }
    return 0;
}
