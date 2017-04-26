#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <graphics.h>
#include <string.h>
#include <windows.h>


void autor ()  {
	
initwindow (800,800);

outtextxy(15,10,"Autors:"); 
	 settextstyle(0,0,1);
 outtextxy(15,25,"Anastasiya Yun, Kim Artem, Raspopin Aleksandr"); 
 
  
     settextstyle(0,0,10);
     setcolor(15);
     outtextxy (300,200,"Hangman");
     settextstyle(9,0,3);
     outtextxy (295,300,"Enter");
      settextstyle(9,0,3);
	
 	
//return 0;	
}

int swit (int k)  {
	printf("Case== %d",k);
	cleardevice();

    switch (k){
			case 1:setcolor(6);  moveto(30,650); lineto(450,650);  break;
			case 2:setcolor(6); moveto(30,650); lineto(450,650); moveto(50,680); lineto(50,50); break;
			case 3:setcolor(6);  moveto(30,650); lineto(450,650); moveto(50,680); lineto(50,50); moveto(50,50); lineto(480,50); break;
			case 4:setcolor(6);  moveto(30,650); lineto(450,650); moveto(50,680); lineto(50,50); moveto(50,50); lineto(480,50); moveto(480,50); lineto(480,200); break;
			case 5:setcolor(6); moveto(30,650); lineto(450,650); moveto(50,680); lineto(50,50); moveto(50,50); lineto(480,50); moveto(480,50); lineto(480,200); circle(480,250,50); break;
			case 6:setcolor(6); moveto(30,650); lineto(450,650); moveto(50,680); lineto(50,50); moveto(50,50); lineto(480,50); moveto(480,50); lineto(480,200); circle(480,250,50); circle(480,270,30); break;
			case 7:setcolor(6);moveto(30,650); lineto(450,650); moveto(50,680); lineto(50,50); moveto(50,50); lineto(480,50); moveto(480,50); lineto(480,200); circle(480,250,50); circle(480,270,30); moveto(480,300); lineto(480,400); break;
			case 8:setcolor(6); moveto(30,650); lineto(450,650); moveto(50,680); lineto(50,50); moveto(50,50); lineto(480,50); moveto(480,50); lineto(480,200); circle(480,250,50); circle(480,270,30); moveto(480,300); lineto(480,400); moveto(480,350); lineto(380,370); break;
			case 9:setcolor(6);  moveto(30,650); lineto(450,650); moveto(50,680); lineto(50,50); moveto(50,50); lineto(480,50); moveto(480,50); lineto(480,200); circle(480,250,50); circle(480,270,30); moveto(480,300); lineto(480,400); moveto(480,350); lineto(380,370); moveto(480,350); lineto(580,370); break;
			case 10:setcolor(6); moveto(30,650); lineto(450,650); moveto(50,680); lineto(50,50); moveto(50,50); lineto(480,50); moveto(480,50); lineto(480,200); circle(480,250,50); circle(480,270,30); moveto(480,300); lineto(480,400); moveto(480,350); lineto(380,370); moveto(480,350); lineto(580,370); moveto(480,400); lineto(450,480); break;
			case 11:  moveto(480,400); lineto(500,480); bar(800,800,0,0); outtextxy(250,300,"GAME OVER"); break;
			default: break;
		}
	
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
 cleardevice();
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
 	swit(r);
 	
 
}
getch();
closegraph();
return 0;
}
}
