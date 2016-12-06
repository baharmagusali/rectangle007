#include <stdio.h>
int main(){
	int a,b;
	float area;
	
	printf("a kenarinin uzunulugu gir:");
	scanf("%d",&a);
	
	printf("b kenarinin uzunulugu gir:");
	scanf("%d",&b);
	
	area = a * b;
	
	printf("area : %.2f",area);
	
	
	
	return 0;
}
