#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char a[1000];
	int dem=0;
	gets(a);
	int n=strlen(a);
	for (int i=0;i<n;i++){
		if(a[i]!=' '&&a[i+1]==' ') dem++;
	}
	printf("%d",dem+1);
return 0;
}


