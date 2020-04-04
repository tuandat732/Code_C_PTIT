#include<stdio.h>
#include<math.h>
#include<string.h>
char c[1000];
void hoathuong(char a[]){
	for (int i;i<=strlen(a);i++){
		int b=a[i];
		if(b>=65&&b<=90) {
			b=b+32;
         c[i]=(char)b;
		}
		else c[i]=a[i];
	}
}
int main(){
	char a[1000];
	int d;
	gets(a);
	hoathuong(a);
	int n=strlen(a);
	for (int i=n;i>=1;i--){
	if(c[i]==' ') {
	d=i; 
	for (int j=i+1;j<n;j++) 
	printf("%c",c[j]);
	break;}
	}
	printf("%c",c[0]);
	for (int i=0;i<=d-1;i++){
		if(c[i]==' '&&c[i+1]!=' ') printf("%c",c[i+1]);	
	}
	printf("@ptit.edu.vn");

return 0;
}


