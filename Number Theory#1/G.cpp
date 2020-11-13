#include<bits/stdc++.h>
using namespace std;
char num1[300],num2[300],num3[300],num4[300];
int main()
{
    while(scanf("%s %s",num1,num2)!=EOF)
    {
        int res[600] = {0};
        int l,l1 = strlen(num1);
        int l2 = strlen(num2);
        for(int i = l1-1;i>=0;i--)
        {
            num3[l1-1-i] = num1[i]-48;
        }
        for(int i = l2-1;i>=0;i--)
        {
            num4[l2-1-i] = num2[i]-48;
        }
        for(int i = 0;i<l1;i++)
        {
            for(int j= 0;j<l2;j++)
            {
                res[i+j] += (num3[i]*num4[j]);
                res[i+j+1] += res[i+j]/10;
                res[i+j] %= 10;
                l = i+j+1;
            }
        }
        while(res[l]==0&&l>0)
            l--;
        for(int i=l;i>=0;i--)
            printf("%d",res[i]);
        puts("");
    }
    return 0;
}
