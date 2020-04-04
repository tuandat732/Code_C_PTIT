#include<stdio.h>
#include<math.h>
#include<string.h>
void hoathuong(char a[]){
	for (int i;i<=strlen(a);i++){
		int b=a[i];
		if(b>=97&&b<=122) {
			b=b-32;
			printf("%c",(char)b);
		}
		else printf(" ");
		}}
		
int main(){
	char a[100];
	gets(a);
	hoathuong(a);
return 0;
}


