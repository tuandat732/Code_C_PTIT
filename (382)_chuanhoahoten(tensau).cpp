#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char a[100],*b[100];
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
	for (int i=0;i<ind;i++){
		if(i==ind-1) printf(", %s",strupr(b[i]));
		else if(i==ind-2) printf("%s",b[i]);
		else printf("%s ",b[i]); 
	}
return 0;
}

