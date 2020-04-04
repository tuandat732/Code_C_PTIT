#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char a[100],*b[100],c[100][100];
	gets(a);
	char *p=strtok(a,",. ");
	int ind=0;
	while(p!=NULL){
		b[ind]=p;
		strcpy(c[ind],p);
		ind++;
		p=strtok(NULL,",. ");
	}
	for (int i=0;i<ind;i++){
		if(strcmp(strupr(c[i]),b[i])==0) printf("%s ",b[i]);
//		printf("%s ",b[i]);
	}	
return 0;
}

