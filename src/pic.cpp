#include<graphics.h>
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

}
