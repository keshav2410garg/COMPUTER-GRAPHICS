#include<iostream.h>
#include<conio.h>
#include<graphics.h>

int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");
	int x0=250;
	int y0=150;
	int x1=250;
	int y1=350;
	line(x0,y0,x1,y1);
	int tx=10;
	int ty=10;
	x0=x0+10;
	y0=y0+ty;
	x1=x1+tx;
	y1=y1+ty;
	setcolor(2);
	line(x0,y0,x1,y1);
	getch();
	closegraph();
	return 0;
}