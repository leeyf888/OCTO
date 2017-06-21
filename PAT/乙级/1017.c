#include<stdio.h>
int main(void)
{
	char ch;
	int a[1000]={};
	int n=0;
	while( (ch = getchar()) != ' '){
		a[n] = ch - '0';
		n++;
	}
	int divisor;
	scanf("%d",&divisor);
	int carry=0;
	for(int i=0;i<n;i++){
		if(i!=0 || a[i]/divisor!=0)
			printf("%d",(10*carry+a[i])/divisor);
			carry = (10*carry+a[i])%divisor;
	}
	if (n == 1 && a[0] < divisor)  
		printf("0");  
		printf(" %d", carry);
		printf("\n");
		return 0;
}
