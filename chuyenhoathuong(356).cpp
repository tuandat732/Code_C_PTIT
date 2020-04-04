#include<stdio.h>
#include<math.h>
#include<string.h>
void hoathuong(char a[]){
	for (int i=0;i<=strlen(a);i++){
		if(a[i]>=97&&a[i]<=123) {
			printf("%c",(char)(a[i]-32));
		}
		else if(a[i]>=65&&a[i]<=90) {
			printf("%c",(char)(a[i]+32));
		}
		else printf("%c",a[i]);
	}
}
int main(){
	char a[1000];
	gets(a);
	hoathuong(a);
return 0;
}


