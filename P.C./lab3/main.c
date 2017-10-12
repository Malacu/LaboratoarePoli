#include<stdio.h>

int main()
{

	int nr, i, sum=0;
	
	scanf("%d",&nr);
	
	for(i = 2 ; i < nr ; i++){
		
		if(nr % i == 0) {
			printf("Numarul se divide cu %d\n",i);
			
			sum+=i;
		
		}
		
		
	}

	printf("Suma este %d \n",sum);

	return 0;
}
