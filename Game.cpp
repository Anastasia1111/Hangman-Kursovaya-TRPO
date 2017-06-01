#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <graphics.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include "pic.h"
#include "glav.h"
#include "dig.h"

int Game (char Text[],char CPY[],char Accept[],char otvet[],int Chislo_simvolov,int j) {
	int nevernii_otvet=0;
	char vvod[2], A[80];
	int  m,x=700, y=700, wight=0, qw=0, i=0, t=0;
while(nevernii_otvet!=12)
{
	swit(nevernii_otvet);
	vvod[0]=getch();
	A[nevernii_otvet]=vvod[0];
	setfillstyle(1,3); bar(370,00, 460,80); 
	settextstyle(0,0,4); setcolor(10); outtextxy (385, 30,vvod);
  t=0;
 i=0;
 
 while(Text[i]!='\0')
 {	
 	if (CPY[i]==vvod[0])
	 t++;
 	for(m=0;m<27;m++) 
	if (vvod[0]==Accept[m])
 	t++;
 	if ((vvod[0]<97) || (vvod[0]>122)) { t++; }
 	if (Text[i]==vvod[0])
 	{
	 otvet[i]=Text[i];
	}
	 i++;
}
 if (t==0)
 {	  
 	settextstyle(0,0,5);
	setcolor(4);
	if(nevernii_otvet<11) outtextxy (x,y,vvod);
	y-=50; if((nevernii_otvet+1)%10==0) x-=50;
	
	nevernii_otvet++;
	Accept[nevernii_otvet]=vvod[0];
	}
 	i=0;

 for (qw=0;qw<j;qw++)
 {
 if (Text[qw]==otvet[qw]){
Text[qw]='2';
Chislo_simvolov++;

 wight=0;

 settextstyle(0,0,4);setcolor(10);

outtextxy (55+qw*55,720,vvod);

}

}

int status;
status=YouWin(Chislo_simvolov, j);
 if (status==1)
{
  break;	
}
}
}
