#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char n[1000];
    gets(n);
    int m=strlen(n);
    int b[1000];
    for (int i=0;i<=m;i++) b[i]=1;
    for (int i=0;i<m;i++){
    	if(b[i]!=0){
		b[i]=0;
		int dem=1;
    	for (int j=i+1;j<m;j++){
    		if(n[j]==n[i]){
    			dem++;
    			b[j]=0;
			}
		}
		printf("%c %d\n",n[i],dem);
	}
}
return 0;
}

