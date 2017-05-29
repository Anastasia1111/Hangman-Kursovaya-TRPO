#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <graphics.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

const int N=100; // sleep

void stand1 () { setfillstyle(1,6); bar(30,650,500,700); }
void stand2 () {setfillstyle(1,6); bar(50,680,100,100); }
void stand3 () {setfillstyle(1,6); bar(100,100,480,150); }
void ver() {setcolor(15); moveto(450,150); lineto(450,300); }
void head () {setcolor(20); circle(470,300,20); }
void telo () {setcolor(20); moveto(450,300); lineto(450,400); }
void rukal () {setcolor(20); moveto(450,305); lineto(445,350);moveto(445,350); lineto(455,370); }
void rukar () {setcolor(20); moveto(450,305); moveto(450,310); lineto(470,330);moveto(450,320); lineto(470,330); }
void legl () {setcolor(20); moveto(450,400); lineto(460,450);moveto(460,450); lineto(460,480); }
void legr () {setcolor(20); moveto(450,400); lineto(470,350);moveto(470,350); lineto(470,410); }

void GameOver () { setfillstyle(1,3);

 bar(0,0,800,800);

settextstyle(0,0,15); setcolor(8); outtextxy(200,300,"GAME OVER"); }

void YouWin () {cleardevice(); setfillstyle(1,3);

 bar(0,0,800,800); settextstyle(0,0,15);

     setcolor(9); outtextxy(250,300,"You WIN"); }

void HUD ()  {

	

 cleardevice();

 setcolor(RED);

  setfillstyle(1,3);

 bar(0,0,800,800);

////////////



   //rectangle(30,795,60,795);

//return 0;	

}

void autor ()  {

//setlocale(LC_ALL, "rus");	

initwindow (800,800);

setbkcolor(3);

setfillstyle(1,3);

 bar(0,0,800,800);

 Sleep(1000);

outtextxy(15,10,"Autors"); 

	 settextstyle(0,0,1);

	 Sleep(N);

outtextxy(95,10,"Yun Anastasia"); 
Sleep(N);

outtextxy(95,30,"Kim Artyom"); 
Sleep(N);

outtextxy(95,50,"Raspopin Aleksandr"); 
Sleep(N);

settextstyle(0,0,10);

outtextxy(300,300,"PRESENT");
Sleep(N);

settextstyle(0,0,10);
setcolor(15);

outtextxy (400,400,"Hangman");

settextstyle(9,0,3);
     
outtextxy (295,500,"Press any key to start");

getch();

bar(0,0,800,800);
settextstyle(9,0,3);

	

 	

//return 0;	

}


  int swit (int k)  {
	//setfillstyle(1,3);
// bar(0,0,800,800);
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
