#include <unistd.h>
#include <stdio.h>
int main(){
	int n1;
	int n2;
	printf("num1 : ");
	scanf("%d",&n1);
	printf("num2 : ");
	scanf("%d",&n2);
	if(n1>n2){
	    int n3 = n1 - n2;
		printf("num %d greater than %d and %d"  , n1 , n2 , n3);
	}
	else {
	    int n3 = n2 - n1;
		printf("num %d greater than %d and %d"  , n2 , n1 , n3 );
	}
	return 0;
}
