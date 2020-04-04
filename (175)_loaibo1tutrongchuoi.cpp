#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char a[100],b[100],*c[100];
	gets(a);
	fflush(stdin);
	gets(b);
	char *p=strtok(a," ,.");
	int ind=0;
	while(p!=NULL){
		c[ind]=p;
		ind++;	
		p=strtok(NULL," ,.");
	}
	for (int i=0;i<ind;i++) if(strcmp(c[i],b)!=0) printf("%s ",c[i]);
return 0;
}

