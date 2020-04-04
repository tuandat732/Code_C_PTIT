#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char a[100],*b[100],c[100];
	gets(a);
	int n=strlen(a),ind=0;
	for (int i=0;i<n;i++){
		if(i==0) strupr(&a[i]);
		else if(a[i-1]==' '&&a[i]!=' ') strupr(&a[i]);
		else strlwr(&a[i]);
	}
	char *p=strtok(a,". ,");
	while(p!=NULL){
		b[ind]=p;
		ind++;
		p=strtok(NULL,",. ");
	}
	strcpy(c,b[1]);
	strcat(c," ");
	for (int i=2;i<ind;i++){
		strcat(c,b[i]);
		if(i==ind-1) break;
		else strcat(c," ");
	}
	strcat(c,", ");
	strcat(c,strupr(b[0]));
	puts(c);
return 0;
}

