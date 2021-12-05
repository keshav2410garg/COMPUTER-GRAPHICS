#include<graphics.h>
#include<conio.h>

int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");//Loading the graphic driver from the disk
	rectangle(100,100,300,300);//Using the rectangle function to draw the rectangle and passing the topmost left coordinate(100,100) and rightmost bottom coordinate(300,300)
	getch();
	closegraph();
	return 0;
}