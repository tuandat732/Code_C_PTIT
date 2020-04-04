#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char a[100],b[100];
    int p;
    gets(a);
    gets(b);
    int  n=strlen(a);
    scanf("%d",&p);
    if(p>n) printf("%s%s",a,b);
    else{
    for (int i=0;i<n;i++){
    	if(i==p-1) printf("%s%c",b,a[i]);
    	else printf("%c",a[i]);
	}
}
return 0;
}

