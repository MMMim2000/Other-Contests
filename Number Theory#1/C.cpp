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
		for(int i=l1-1, j=0;i>=0;i--,j++){
			res[j]=A[i]-'0';
		}

		for(int i=l2-1, j=0;i>=0;i--,j++){
			res[j]+=B[i]-'0';
			if(res[j]>9){
				res[j+1]++;
				res[j]-=10;
			}
		}
		if(res[l]!=0) l++;
		printf("Case %d:\n%s + %s = ",k,A,B);
		for(int i=l-1;i>=0;i--){
			if(res[i]!=0){
				for(int j=i;j>=0;j--)
				printf("%d",res[j]);
				break;
			}
		}
		if(k<T)
		printf("\n");
		printf("\n");
	}
	return 0;
}
