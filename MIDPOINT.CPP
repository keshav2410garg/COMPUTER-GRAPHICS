#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main(){
	int x,y,xmid,ymid,r,dp;//declaring the variables
	int gm,gd=DETECT;
	clrscr();
	initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
	xmid=300;//x co ordinate of the mid point of the circle 
	ymid=200;//y co ordinate of the mid point of the circle
	r=100;//radius of the circle
	putpixel(xmid,ymid,2);
	x=0;
	y=r;
	dp=1-r;
	do{
	 //ploting the points on all 8 quadrants with color red-2
	 putpixel(xmid+x,ymid+y,2);
	 putpixel(xmid+y,ymid+x,2);
	 putpixel(xmid-y,ymid+x,2);
	 putpixel(xmid-x,ymid+y,2);
	 putpixel(xmid-x,ymid-y,2);
	 putpixel(xmid-y,ymid-x,2);
	 putpixel(xmid+y,ymid-x,2);
	 putpixel(xmid+x,ymid-y,2);
	 if(dp<0){
	 dp+=(2*x)+1;
	 }
	 else{
	 y=y-1;
	 dp+=(2*x)-(2*y)+1;
	 }
	 x=x+1;
	 }while(y>x);
	 getch();
}