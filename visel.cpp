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



int main()
{
	
	 
	int rct=0, m, Enter, Chislo_simvolov=0, x=700, y=700, wight=0, qw=0, j=0, i=0, t=0, nevernii_otvet=0, n=0;


autor();
setlinestyle(0,0,3);

 char vvod[2], A[80];

 char Text[80], CPY[80], Accept[27];



 system("cls");

 RNDMWORD(Text);
 
 strcpy(CPY, Text);
  

for(i=0;Text[i]!='\0';i++)
{
	j++;
	if(Text[i]=='_') Chislo_simvolov++;
}

char otvet[j+1];



printf("Chislo bukv %d \n",j);

 
	
 //////////////////////////////

 for (i=0;i<j;i++)

 {
 
 otvet[i]='1';
 setcolor(20);
 if(Text[i]!='_')rectangle(50+rct,755,100+rct,715);
 rct+=55;

 
 

}

otvet[i]='\0';

 /////////////////////////////


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

 	printf("%c\n",vvod[0]);

	 

	 printf("\n q=%d j=%d\n",Chislo_simvolov,j);

	 otvet[i]=Text[i];

	 printf("\n");	

 	}

	 i++;

}

printf("Bookva %s povtorayenca %d raz\n" ,vvod,t);	

//////////



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

 printf("\n q=%d j=%d\n",Chislo_simvolov,j);

////////////

 wight=0;

 settextstyle(0,0,4);setcolor(10);

outtextxy (55+qw*55,720,vvod);

}

}



 if (Chislo_simvolov==j)
{
  YouWin ();
  break;	
}

}



outtextxy (35,700,"Otvet:");

outtextxy (275,700,CPY);

getch();
closegraph();
return 0;
}
