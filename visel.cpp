#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <graphics.h>
#include <string.h>

int autor ()  {
	initwindow(600,800); 
	outtextxy(15,10,"Autor:"); 
 outtextxy(15,25,"Anastasiya Yun, Kim Artem, Raspopin Aleksandr"); 
 	
return 0;	
}

int swit (int k)  {

    switch (k){
			case 1: moveto(30,650); 
	lineto(450,650); getch(); break;
			case 2: moveto(50,680);         
lineto(50,50); getch();break;
			case 3: moveto(50,50);
lineto(480,50);getch(); break;
			case 4: moveto(480,50);
lineto(480,200);getch(); break;
			case 5: circle(480,250,50);getch(); break;
			case 6: circle(480,270,30);getch(); break;
			case 7: moveto(480,300);
lineto(480,400); getch();break;
			case 8: moveto(480,350);
lineto(380,370);getch(); break;
			case 9: moveto(480,350);
lineto(580,370);getch(); break;
			case 10: moveto(480,400);
lineto(450,480);getch(); break;
			case 11: moveto(480,400);
lineto(500,480);
bar(800,800,0,0);
outtextxy(250,300,"GAME OVER"); break;
			default: break;
		}
		return 0;
}


int main(){
autor();
getch();

 //closegraph();
 
 char s[80],ch[2];
 char vvod[2];

 gets(s);

 int i=0,t=0,r=0,n=0,y=0;
 //initwindow(600,800); 
 
while(r!=11){

gets(vvod);
 //puts(vvod);
 t=0;
 while(s[i]!='\0')
 {	 y++;
 	if (s[i]==vvod[0])
 	{
 	printf("%s",vvod);
	 t++;
	 n++;		
	 printf("\n");	
 	}
	 i++;
	
}
printf("Bookva %s est & povtorayenca %d raza" ,vvod,t);	
//////////

 if (t<1)
 r++;
 //////////////
 
 	i=0;
 	//printf("\n r= %d",r);
 	swit(r);
 	if (n=y)
 	{
 		bar(800,800,0,0);
outtextxy(250,300,"YOU WIN");
getch();
 	}
}
getch();
closegraph();
return 0;
}
