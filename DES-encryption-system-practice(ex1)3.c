#include <stdio.h>

int main()
{
		
	int SBOX[4][16] =  {{14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5, 9, 0, 7},
						{0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8},
						{4, 1, 14, 8, 13, 6, 2, 11, 15, 12, 9, 7, 3, 10, 5, 0},
						{15, 12, 8, 2, 4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13}};
	
	char input1[6], input2[6];
	scanf("%s", &input1);
	scanf("%s", &input2);
		
	int r1 = (input1[0] - '0')*2 + (input1[5] - '0');
	int c1 = (input1[1] - '0')*8 + (input1[2] - '0')*4 + (input1[3] - '0')*2 + (input1[4] - '0');
		
	int r2 = (input2[0] - '0')*2 + (input2[5] - '0');
	int c2 = (input2[1] - '0')*8 + (input2[2] - '0')*4 + (input2[3] - '0')*2 + (input2[4] - '0');
	
	int n1 = SBOX[r1][c1];
	int n2 = SBOX[r2][c2];
	
	int y, z;
	int a[10], b[10];
	int i = 0, j = 0;
	
	
	while(n1>0)
	{
		a[i] = n1%2;
		i = i+1;
		n1 = n1/2;
	}
	while(n2>0)
	{
		b[j] = n2%2;
		j = j+1;
		n2 = n2/2;
	}
	
	
	for(; i > 0; i--)
	{
		printf("%d", a[i-1]);
	
	}
	printf("\n");
	for(; j > 0; j--)
	{
		printf("%d", b[j-1]);
	
	}
	return 0;
}
