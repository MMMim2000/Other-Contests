#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
	int T;
	scanf("%d",&T);
	int l1,l2,k=0,l,res[1100]={0};
	char A[1100],B[1100],ch='+';
	for(int k = 1;k<=T; k++){
		memset(A,0,sizeof(A));
		memset(B,0,sizeof(B));
		memset(res,0,sizeof(res));
		scanf("%s %s",A,B);
		l1=strlen(A);
		l2=strlen(B);
		l=max(l1,l2);
		for(int i=0;i<l1;i++){
			res[i] +=A[i]-'0';
		}
		for(int i=0;i<l2;i++){
			res[i]+=B[i]-'0';
		}
		for(int i=0;i<=l;i++)
        {
            res[i+1] += res[i]/10;
            res[i] %= 10;
        }
		int a=0,b=0;
		for(a=l+1;a>=0;a--)
        {
            if(res[a]) break;
        }
        if(a<0) a++;
        while(res[b]==0) b++;
		for(int i=b;i<=a;i++){
			printf("%d",res[i]);
		}
		printf("\n");
	}
	return 0;
}
