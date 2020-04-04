#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char a[1000];
    gets(a);
    int n=strlen(a);
    for (int i=0;i<n;i++){
    	if(a[i]==' '&&a[i+1]!=' ') printf("\n");
    	else if((a[i-1]==' '&&a[i]!=' ')||a[i]!=' ') printf("%c",a[i]);
    	
	}
   
return 0;
}

