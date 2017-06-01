#include<graphics.h>
#include<conio.h>

const int N=100; //sleep

void autor ()  {
	

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
	

}
