#include<stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	getchar();
	int sum = 0;
	char x;
	while(x = getchar()) {
		if(x == '\n') break;
		if(x == '1') sum+=a;
		if(x == '2') sum+=b;
		if(x == '3') sum+=c;
		if(x == '4') sum+=d;
	}
	printf("%d\n",sum);
	return 0;
}
