#include <stdio.h>

int main()
{
	
	int SBOX[4][16] =  {{14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5, 9, 0, 7},
						{0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8},
						{4, 1, 14, 8, 13, 6, 2, 11, 15, 12, 9, 7, 3, 10, 5, 0},
						{15, 12, 8, 2, 4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13}};
	
	char input[6];
	int y, z;
	int a[10];
	int i = 0;
	
	for(y=0;y<=1;y++)
	{
	

		scanf("%s", &input);
	
	
		int r = (input[0] - '0')*2 + (input[5] - '0');
		int c = (input[1] - '0')*8 + (input[2] - '0')*4 + (input[3] - '0')*2 + (input[4] - '0');
	
	
		int n = SBOX[r][c];

	
		
	
		while(n>0)
		{
			a[i] = n%2;
			i = i+1;
			n = n/2;
		}
		
		for(; i > 0; i--)
		{
			printf("%d", a[i-1]);
		
		}
		printf("\n");
	}

	return 0;
 } 
