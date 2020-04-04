#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char a[1000];
    gets(a);
    int n=strlen(a);
    for (int i=0;i<n;i++){
    	if(a[i]==' ') {
    		while(a[i]==' ')
    		for (int j=i;j<n;j++) a[j]=a[j+1];
		}
	}
	//for (int i=0;i<n;i++ ) printf("%s",a);
	printf("%s",a);
return 0;
}

