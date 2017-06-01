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
#include "Game.h"

const int N=100; //sleep


int main()
{		 
	int rct=0, m, Chislo_simvolov=0, x=700, y=700, wight=0, qw=0, j=0, i=0, t=0, n=0;

autor();
setlinestyle(0,0,3);

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
 //////////////////////////////Рисуем квадраты
 for (i=0;i<j;i++)
 {
 otvet[i]='1';
 setcolor(20);
 if(Text[i]!='_')rectangle(50+rct,755,100+rct,715);
 rct+=55;
}

otvet[i]='\0';
 /////////////////////////////
Game (Text,CPY,Accept,otvet,Chislo_simvolov,j);



outtextxy (35,700,"Otvet:");

outtextxy (275,700,CPY);

getch();
closegraph();
return 0;
}
