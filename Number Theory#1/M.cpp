#include <bits/stdc++.h>
using namespace std;
char s1[101],s2[101];
int main() {
    scanf("%s %s",s1,s2);
    int l1,l2,flag=0;
    l1 = strlen(s1);
    l2 = strlen(s2);
    if(l1==l2)
    {
      for(int i=0;i<l1;i++)
      {
         if(s1[i]!=s2[i])
         {
            flag = 1;
            break;
         }
      }
    }
    if(!flag&&l1==l2) printf("%s\n",s1);
    else printf("1\n");
    return 0;
}
