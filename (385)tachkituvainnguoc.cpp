#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
char a[1000];
gets(a);
int n=strlen(a);
for (int i=n-1;i>=0;i--){
	printf("%c ",a[i]);
	
}
return 0;
}


