#include"pic.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <graphics.h>
#include <string.h>
int swit (int k)  {

	printf("Case== %d",k);
	switch (k){
	case 1:stand1 ();  break;
	case 2:stand1 (); stand2 (); break;
case 3:stand1 (); stand2 (); stand3 ();  break;
	case 4:stand1 (); stand2 (); stand3 (); ver(); break;
	case 5:stand1 (); stand2 (); stand3 (); ver(); head(); break;
	case 6:stand1 (); stand2 (); stand3 (); ver(); head(); telo(); break;
	case 7:stand1 (); stand2 (); stand3 (); ver(); head(); telo(); rukal(); break;
	case 8:stand1 (); stand2 (); stand3 (); ver(); head(); telo(); rukal(); rukar(); break;
	case 9:stand1 (); stand2 (); stand3 (); ver(); head(); telo(); rukal(); rukar(); legl(); break;
	case 10:stand1 (); stand2 (); stand3 (); ver(); head(); telo(); rukal(); rukar(); legl(); legr(); break;
	case 11:GameOver(); break; break;
	default: break;
}
}



void RNDMWORD(char *t)
{
	
	FILE *f;
	int r,i,k;

	
	srand(time(NULL)); r=rand()%1000; 
	k=rand()%3;
	cleardevice(); setfillstyle(1,3);
 	bar(0,0,800,800);  setcolor(9);  settextstyle(0,0,3);
	switch(1)
	{
	case 0: 
	{
	f=fopen("words/animals.txt","r");
	outtextxy(175,375,"The theme: ANIMALS");
	getch();
	bar(0,0,800,800); //settextstyle(0,0,4);
	outtextxy(520,30,"ANIMALS");
	break;
	}
	case 1:
	{
		f=fopen("words/games.txt","r"); 
		outtextxy(175,375,"The theme: GAMES");
		getch();
		bar(0,0,800,800); //settextstyle(0,0,4);
		outtextxy(520,30,"GAMES");
		break;
	}
		case 2:
	{
		f=fopen("words/ancient greek gods.txt","r"); 
		outtextxy(120,375,"The theme: GREEK GODS");
		getch();
		bar(0,0,800,800); //settextstyle(0,0,4);
		outtextxy(480,30,"GREEK GODS");
		break;
	}
	}
	
	printf("%d",r);
	for(i=0;i<=r; i++)
	if(getc(f)==EOF) 
	{
	rewind(f); 
	fscanf(f,"%s",t);
	}
	else 
	{
		fseek(f,-1,1);
		fscanf(f,"%s",t);
	}
	printf("%s",t);
	
	fclose(f);
//	
	}
