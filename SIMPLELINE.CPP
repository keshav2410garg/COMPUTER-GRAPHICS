#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main(){
	int gd=DETECT,gm;//intializes the graphic driver variable gd and graphic mode
	initgraph(&gd,&gm," ");//loads the driver
	setcolor(2);//set the color of the line to red that is 2
	line(250,150,250,350);//drawing the line using function and passing coordinates
	getch();
	closegraph();//clase the loaded graph driver 
	return 0;
}