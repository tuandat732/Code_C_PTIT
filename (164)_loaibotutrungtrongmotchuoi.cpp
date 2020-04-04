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
	int m[100]={0};
	for (int i=0;i<ind;i++){
		if(m[i]==0){
			for (int j=i+1;j<ind;j++)
			if(strcmp(b[i],b[j])==0) m[j]=1;
			printf("%s ",b[i]);
		}
	}
return 0;
}

