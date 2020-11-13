#include<bits/stdc++.h>
using namespace std;
bool prime[1100];
char N[] = "It is not a prime word.\n";
char Y[] = "It is a prime word.\n";
int convert(char s[])
{
    int l = strlen(s);
    int d = 0;
    for(int i = 0;i<l;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            d+=s[i]-96;
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            d+=s[i]-38;
        }
    }
    return d;
}
int main()
{
    int k;
    for(int i = 4;i <= 1100;i+=2)
        prime[i] = 1;
    for(int i = 3;i*i <= 1100;i+=2)
    {
        k = 2*i;
        if(prime[i]==0)
        for(int j= i*i;j <= 1100;j += k)
        {
            prime[j] = 1;
        }
    }
    char s[21];
    while(scanf("%s",s)!=EOF)
    {
        int x = convert(s);
        if(prime[x]) printf("%s",N);
        if(!prime[x]) printf("%s",Y);
    }
    return 0;
}
