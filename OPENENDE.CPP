#include<graphics.h>
#include<stdio.h>
#include<conio.h>

int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");

	line(0,0,100,200);
	line(100,200,200,0);
	line(200,0,300,200);
	line(300,200,400,0);
	line(400,0,500,200);
	line(500,200,600,0);
	line(600,0,700,200);
	line(0,200,700,200);

	circle(300,100,30);

	getch();
	closegraph();

return 0;
}