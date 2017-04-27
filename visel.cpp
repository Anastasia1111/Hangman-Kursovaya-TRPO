#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <graphics.h>
#include <string.h>
#include <windows.h>

void stand1 () { setfillstyle(1,6); bar(30,650,500,700); }
void stand2 () {setfillstyle(1,6); bar(50,680,100,100); }
void stand3 () {setfillstyle(1,6); bar(100,100,480,150); }
void ver() {moveto(480,150); lineto(480,200); }
void head () {setcolor(6); circle(470,300,20); }
void telo () {setcolor(6); moveto(450,300); lineto(450,400); }
void rukal () {setcolor(6); moveto(450,305); lineto(445,350);moveto(445,350); lineto(455,370); }
void rukar () {setcolor(6); moveto(450,305); moveto(450,310); lineto(470,330);moveto(450,320); lineto(470,330); }
void legl () {moveto(450,400); lineto(460,450);moveto(460,450); lineto(460,480); }
void legr () {moveto(450,400); lineto(470,350);moveto(470,350); lineto(470,410); }
void GameOver () {bar(800,800,0,0); outtextxy(250,300,"GAME OVER"); }


void HUD ()  {
	
 cleardevice();
 setcolor(RED);
  setfillstyle(1,3);
 bar(0,0,800,800);

//return 0;	
}

void autor ()  {
	
initwindow (800,800);
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
 outtextxy(300,100,"PRESENT");
 Sleep(500);
     settextstyle(0,0,10);
     setcolor(15);
     outtextxy (300,200,"Hangman");
     Sleep(1000);
     settextstyle(9,0,3);
     outtextxy (295,300,"Press Enter");
      settextstyle(9,0,3);
	
 	
//return 0;	
}

int swit (int k)  {
	setfillstyle(1,3);
 bar(0,0,800,800);
	printf("Case== %d",k);
	
	
	switch (k){
	
			case 1:stand1 ();  break;
			case 2:stand2 (); break;
			case 3:stand3 ();  break;
			case 4:ver(); break;
			case 5:head(); break;
			case 6:telo(); break;
			case 7:rukal(); break;
			case 8:rukar(); break;
			case 9:legl(); break;
			case 10:legr(); break;
			case 11:GameOver (); break;
			default: break;
		}
		
		/*if(k==1) stand1 ();
		if(k==2) stand2();
		if(k==3) stand3();
		if(k==4) ver();
		if(k==5) head();
		if(k==6) telo();
		if(k==7) rukal();
		if(k==8) rukar();
		if(k==9) legl();
		if(k==10) GameOver ();
	*/	
		//return 0;
}


int main(){
	int l;
autor();

//Sleep(1000);
l=getch();
if (l==13)
{
 //closegraph();
HUD();
 char s[80],ch[2];
 char vvod[2];
 
 gets(s);
 system("cls");
 

 int j=0,i=0,t=0,r=0,n=0,y=0;
 //initwindow(600,800); 
 
 while(s[j]!='\0'){
	 j++;
}
char otvet[j];

 printf("Chislo bukv %d \n",j);
while(r!=11){
	swit(r);
gets(vvod);
 t=0;
 while(s[i]!='\0')
 {	 y++;
 	if (s[i]==vvod[0])
 	{
 	printf("%s",vvod);
	 t++; 
	 s[i]=otvet[i];
	 printf("\n");	
 	}
	 i++;
	
}
printf("Bookva %s povtorayenca %d raz\n" ,vvod,t);	
//////////

 if (t==0)
 r++;
 
 	i=0;
 	
 	
 
}
getch();
closegraph();
return 0;
}
}
