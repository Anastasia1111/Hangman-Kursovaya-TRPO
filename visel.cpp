#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <graphics.h>
#include <string.h>
#include <windows.h>

void stand1 () { setfillstyle(1,6); bar(30,650,500,700); }
void stand2 () {setfillstyle(1,6); bar(50,680,100,100); }
void stand3 () {setfillstyle(1,6); bar(100,100,480,150); }
void ver() {setcolor(15); moveto(450,150); lineto(450,300); }
void head () {setcolor(6); circle(470,300,20); }
void telo () {setcolor(6); moveto(450,300); lineto(450,400); }
void rukal () {setcolor(6); moveto(450,305); lineto(445,350);moveto(445,350); lineto(455,370); }
void rukar () {setcolor(6); moveto(450,305); moveto(450,310); lineto(470,330);moveto(450,320); lineto(470,330); }
void legl () {moveto(450,400); lineto(460,450);moveto(460,450); lineto(460,480); }
void legr () {moveto(450,400); lineto(470,350);moveto(470,350); lineto(470,410); }
void GameOver () { setfillstyle(1,3);
 bar(0,0,800,800);
settextstyle(0,0,15); setcolor(8); outtextxy(250,300,"GAME OVER"); }
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
	
initwindow (800,800);
setbkcolor(3);
setfillstyle(1,3);
 bar(0,0,800,800);
 Sleep(1000);
outtextxy(15,10,"Autors:"); 
	 settextstyle(0,0,1);
	 Sleep(1000);
 outtextxy(15,25,"Anastasiya Yun"); 
 Sleep(1000);
 outtextxy(15,45,"Kim Artem"); 
 Sleep(1000);
 outtextxy(15,65,"Raspopin Aleksandr"); 
 Sleep(1000);
  
   settextstyle(0,0,10);
 outtextxy(300,300,"PRESENT");
 Sleep(500);
     settextstyle(0,0,10);
     setcolor(15);
     outtextxy (400,400,"Hangman");
     Sleep(1000);
     settextstyle(9,0,3);
     outtextxy (295,500,"Press Enter");
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
			case 11:GameOver(); break;
			default: break;
		}
	
}

int main(){
	int Enter,Chislo_simvolov=0,x=700,y=750;
autor();

Enter=getch();
if (Enter==13)
{ 
HUD();

 char vvod[2], A[80];
 char Text[80]={"intellstellar"};

 system("cls");
 
 int j=0,i=0,t=0,nevernii_otvet=0,n=0;
  
 while(Text[j]!='\0'){
	 j++;	 
}
char otvet[j+1];

printf("Chislo bukv %d \n",j);
 
 //////////////////////////////
 int wight;
 wight=0;
 for (i=0;i<j;i++)
 {
 //setcolor(20);
 //rectangle(30+wight,755,60+wight,715);
 //wight+=30;
 otvet[i]='_';
}
otvet[i]='\0';
 /////////////////////////////
 nevernii_otvet=0;
while(nevernii_otvet!=12){
	swit(nevernii_otvet);
	vvod[0]=getch();
	A[nevernii_otvet]=vvod[0];
	
	 

 t=0;
 i=0;
 while(Text[i]!='\0')
 {	 
 	if (Text[i]==vvod[0])
 	{
 	printf("%c\n",vvod[0]);
	 t++;
	 printf("\n q=%d j=%d\n",Chislo_simvolov,j);
	 otvet[i]=Text[i];
	 printf("\n");	
 	}
	 i++;
}
printf("Bookva %s povtorayenca %d raz\n" ,vvod,t);	
//////////

 if (t==0)
 {	  settextstyle(0,0,5);
 outtextxy (x,y,vvod);
	 y-=50; if((nevernii_otvet+1)%10==0) x-=50;
 nevernii_otvet++;
	}
 
 	i=0;
 	Chislo_simvolov=0;
 	int qw=0;
 	
 for (qw=0;qw<j;qw++)
 {
 if (Text[qw]==otvet[qw]){
Chislo_simvolov++;
 printf("\n q=%d j=%d\n",Chislo_simvolov,j);
////////////
 wight=0;
 settextstyle(0,0,5);setcolor(20);
outtextxy (35+wight,730,otvet);
/* for (i=0;i<=qw;i++)
 {
 setcolor(20);
settextstyle(0,0,5);
outtextxy (35+wight,730,otvet);
 wight+=30;
///////////
}
*/}
}

 if (Chislo_simvolov==j){
 //	r=13;
  YouWin ();
  break;	
}


}
outtextxy (35+wight,700,"Otvet:");
outtextxy (275+wight,700,Text);
}
getch();
closegraph();
return 0;
}
