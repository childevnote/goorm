#include <stdio.h>
#include <stdbool.h>
int main() {
	int N, res=0;
	int K[1000];
	bool top= false;
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%d", &K[i]);
		res+=K[i];

		if(i>0 && K[i-1]-K[i]>0)
			top=true;
		
		if(top && K[i-1]-K[i]<0)
		{
			printf("0");
			return 0;
		}
	}
	
	printf("%d", res);
	return 0;
}