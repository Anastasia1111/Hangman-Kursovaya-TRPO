#include<stdio.h>
#include<string.h>
int compair_int(int expected, int result)
{
	if(expected==result) 
	{
		printf("[OK]\nexpected %d, got %d\n",expected,result);
		return 1;
	} 
	else 
	{
		printf("[FAIL]\nexpected %d, got %d\n",expected,result);
		return 0;
	}
	
}

int compair_not_char_array(char A[],char B[])
{
	if(	strcmp(A,B) )
	{
		printf("[OK]\n");
		return 1;
	} 
	else 
	{
		printf("[FAIL]\n%s = %s\n",A);
		return 0;
	}
}
