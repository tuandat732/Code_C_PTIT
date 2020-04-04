#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char a[100],*b[100];
	gets(a);
	char *p=strtok(a," ");
	int ind=0;
	while(p!=NULL){
		b[ind]=p;
		ind++;
		p=strtok(NULL," ");
	}
	int m[100]={0},dem=1,max=0;
	for (int i=0;i<ind;i++)
	{
		if(m[i]==0){
			for (int j=i+1;j<ind;j++)
			if(stricmp(b[i],b[j])==0){
				dem++;
				m[j]=1;
			}
		}
		if(dem>=max) max=dem;
		dem=1;
	}
	dem=1;
	for (int i=0;i<ind;i++)
	{
		if(m[i]==0){
			for (int j=i+1;j<ind;j++)
			if(stricmp(b[i],b[j])==0){
				dem++;
				m[j]=1;
			}
		}
		if(dem==max) printf("%s %d ",strlwr(b[i]),max);
		dem=1;	
	}
return 0;
}

