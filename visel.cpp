#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <graphics.h>


int main(){
	
initwindow(600,800); 
	outtextxy(15,10,"Autor:"); 
 outtextxy(15,25,"Anastasiya Yun, Kim Artem, Raspopin Aleksandr"); // ??????? ???? ??? ???????
//////////////////
getch();                     // ???????? 400 ?? 300 ????????
moveto(50,680);         // ?????? ? ????? (0,0)
lineto(50,50);
getch();
moveto(30,650); 
lineto(450,650);
getch();
//палки виселицы
moveto(50,50);
lineto(480,50);
getch();
moveto(480,50);
lineto(480,200);

getch();
circle(480,250,50);
//голова
getch();
circle(480,270,30);
//тело
getch();
moveto(480,300);
lineto(480,400);
//рука п
getch();
moveto(480,350);
lineto(380,370);
//рука л
getch();
moveto(480,350);
lineto(580,370);
//нога п
getch();
moveto(480,400);
lineto(450,480);
//нога л
getch();
moveto(480,400);
lineto(500,480);
getch();
bar(800,800,0,0);
outtextxy(250,300,"GAME OVER"); 
/////////////////////////
/////////////////////Buble


getch();
return 0;
}
