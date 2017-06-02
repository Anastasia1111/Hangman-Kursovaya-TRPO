#include<graphics.h>
#include "compairtest.h"
#include "dig.h"
#include<stdio.h>
#include "pic.h"

main()

{
	
	initwindow (800,800);
	int m,i,j=1,expected,result;
	char before[80], after[80];
	strcpy(before,"usopp ");
	for(i=1;i<12;i++,j++)
	{
		printf("Test# %2d swit: step=%d ",j,i);
		result=swit(i);
		expected=i;
		compair_int(expected, result);
	}
    
		printf("Test# %2d RNDMWORD: before=usopp ",j);
		strcpy(before,"usopp ");
		strcpy(after,before);
		RNDMWORD(after); 
		printf(" after=%s ",after);
		compair_not_char_array(before, after);
	
	j++;
	
		for(i=1;i<6;i+=2,j++)
	{	 m=6-i;
		printf("Test# %2d YouWin: Chislo_simvolov=%d dlina_slova=%d",j,i,6-i);
		
		result = YouWin(i,m);
		if(i==m)expected=1;
		 else expected=0; 
		compair_int(expected, result);
	}
	
}
