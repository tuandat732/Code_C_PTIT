#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char a[100];
    gets(a);
    int n=strlen(a),dem=0,dem1=0,dem2=0;
    for (int i=0;i<n;i++){
    	if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')) dem++;
    	else if(a[i]>='0'&&a[i]<='9') dem1++;
    	else dem2++;
	}
	printf("%d %d %d",dem1,dem,dem2);
return 0;
}

