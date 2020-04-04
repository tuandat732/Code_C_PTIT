#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char a[100];
	gets(a);
	int n=strlen(a);
	for (int i=0;i<n;i++){
		if(a[i]==' ') {
			for (int j=0;j<=i;j++) printf("%c",a[j]);
		}
		break;
	}
	printf("\n");
	for (int i=0;i<n;i++){
		if(a[i]==' '&&a[i+1]!=' ') for (int j=i+1;j<n;j++) if(a[j]==' '&&a[j-1]!=' ') 
		for (int k=i+1;k<j;k++) printf("%c",a[k]);
		printf("\n");
	}
return 0;
}


