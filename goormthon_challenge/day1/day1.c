#include <stdio.h>
int main() {

	float r=0.0;
	int w, rm=0;

	scanf("%d %f",&w, &r);
	rm = w*(1+r/30);
	printf("%d", rm);
	return 0;
}