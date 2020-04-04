#include<stdio.h>
#include<math.h>
#include<string.h>

void hoathuong2(char a[]){
	for (int i;i<=strlen(a);i++){
		if((a[i-1]==' '&&a[i]!=' ')||(i==0&&a[i]!=' ')){
		int b=a[i];
		if(b>=97&&b<=122) {
			b=b-32;
			a[i]=(char)b;
		}
	}
}
}
int main(){
	char a[100];
	gets(a);
	int n=strlen(a);
	for (int i;i<=strlen(a);i++){
		int c=a[i];
	if(c>=65&&c<=90) {
			c=c+32;
			a[i]=(char)c;
		}
	}
    hoathuong2(a);
    printf("%s",a);
	return 0;
}


