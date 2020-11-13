#include<bits/stdc++.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N%2)
    {
        printf("%d %d\n",9,N-9);
    }
    else
    {
        printf("%d %d\n",4,N-4);
    }
    return 0;
}
