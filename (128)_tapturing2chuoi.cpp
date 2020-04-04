#include<stdio.h>
#include<math.h>
#include<string.h>
void xoatu(char *s,char*c){
	while(strstr(s,c)!=NULL){
		int t=strlen(s)-strlen(strstr(s,c)), d=strlen(c);
		if((s[t-1]==' '&&s[t+d]==' ')||(s[t-1]==' '&&t+d==strlen(s)))
		strcpy(s+t-1,s+t+d);
		if(s[t+d]==' '&&t==0) strcpy(s,s+t+d+1);
	}
}
int main(){
	char a[100],b[100],*c[100];
	gets(a);
	gets(b);
	int ind=0;
	char *p=strtok(a,",. ");
	while(p!=NULL){
		c[ind]=p;
		ind++;
		p=strtok(NULL,",. ");
	}
	int m[100]={0};
	for(int i=0;i<ind;i++){
		if(m[i]==0){
		if (strstr(b,c[i])==NULL){
			printf("%s ",strlwr(c[i]));
			for (int j=i+1;j<ind;j++){
				if(stricmp(c[i],c[j])==0) m[j]=1;
			}
		}
	}
}
return 0;
}

