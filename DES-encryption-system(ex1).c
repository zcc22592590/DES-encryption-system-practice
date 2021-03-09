#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sbox[4][16]={{14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7},{0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8},{4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0},{15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13}};
	
	char sb[7];
	int row,col;
	int x1,x2,a,b,c,d;
	
	while(scanf("%s",sb)!=EOF)
	{
	row=(sb[0]-48)*2+(sb[5]-48)*1;
	col=(sb[1]-48)*8+(sb[2]-48)*4+(sb[3]-48)*2+(sb[4]-48)*1;
	x1=sbox[row][col];
    
        a = x1 % 2;         
        b = (x1 / 2)%2;  
        c = (x1 / 4)%2;    
        d = (x1 / 8)%2;      
        printf("%d%d%d%d",d,c,b,a);
    
    printf("\n");
	}
	
    return 0;
}
