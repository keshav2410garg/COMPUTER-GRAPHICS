#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
  int gd=DETECT,gm,i;
  float x,y,dx,dy,steps;
  int x0,x1,y0,y1;
  initgraph(&gd,&gm,"C:\\TC\\BGI");
  setbkcolor(BLACK);
  x0=100,y0=200,x1=500,y1=300;//declaring and intialialzing starting point (x0,y0) and ending point(x1,y1) of the line
  //Algorithm for DDA line drawing
  dx=(float)(x1-x0);
  dy=(float)(y1-y0);
  if(dx>=dy)//checking if the slope is greater than 1 or less then 1
  {
    steps=dx;
  }

  else{
   steps=dy;
  }
  dx=dx/steps;
  dy=dy/steps;
  x=x0;
  y=y0;
  i=1;
  while(i<=steps){
    putpixel(x,y,RED);//plotting each point of the line
    x+=dx;//increamenting the x coordinate
    y+=dy;//increamenting the y coordinate
    i=i+1;
  }
  getch();
  closegraph();
}