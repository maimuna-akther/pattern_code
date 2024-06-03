// Output  : 
// How many rows of right triangle?
// 5               
// * * * * *
// * * * *
// * * * 
// * *
// *
   
#include<stdio.h>
int main()
{       
        int row, col, rows = 5;
        printf(" How many rows of right triangle?\n %d\n", rows);
        	printf(" \n ");

	for (row = 5; row >= 1; row--)
	{
		for (col = 1; col <= row; col++)
		{
			printf(" * ");
		}
			printf(" \n ");
	}
	return 0;
}
        
