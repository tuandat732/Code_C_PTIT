#include<stdio.h>
#include<math.h>
#include<string.h>
int ngto(int n){
	if(n<2) return 0;
	for (int i=2;i<=sqrt(n);i++)
		if(n%i==0) return 0;
		return 1;
	}

int main(){
    char a[1000];b[1000]={"1"};
    gets(a);
    for (int i=0;i<strlen(a);i++){
    	if((ngto((int)a[i])==1) {
    		for (int j=i+1;j<strlen(a);j++){
    			if(a[j]==a[i]) {
    				dem++;
    				b[j]='0';
				}
			}
		}
	}

