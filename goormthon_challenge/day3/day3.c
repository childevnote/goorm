#include <stdio.h>
int main() {
	int T, L, R, res=0;
	char S;
	
	scanf("%d",&T);
	for(int i=0; i<T; i++)
	{
		scanf("%d %c %d", &L, &S, &R);
		if(S == '+')
			res+=L+R;
		else if(S == '-')
			res+=L-R;
		else if(S == '*')
			res+=L*R;
		else if(S == '/')
			res+=L/R;
	}
	printf("%d", res);
	return 0;
}
