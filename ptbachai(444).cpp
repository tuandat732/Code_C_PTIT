#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	float delta=b*b-4*a*c;
	if(a==0) printf("%.2f",-c/b);
	else if (a!=0&&b!=0&&c!=0){
		if(delta==0) printf("%.2f",-b/(2*a));
		else if(delta>0) printf("%.2f %.2f",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
		else printf("NO");
	}
	return 0;
}


