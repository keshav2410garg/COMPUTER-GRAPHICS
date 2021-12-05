#include<graphics.h>
#include<conio.h>

int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	setcolor(WHITE);//setting the color to draw as white
	//Drawing three rectangle needed to draw a hut
	rectangle(150,180,250,300);
	rectangle(250,180,420,300);
	rectangle(180,250,220,300);
	//drawing the lines neede to draw roof of the hut
	line(200,100,150,180);
	line(200,100,250,180);
	line(200,100,370,100);
	line(370,100,420,180);


	setfillstyle(SOLID_FILL,BROWN);//Function used to set the fill style to fill the closed polygon
	floodfill(152,182,WHITE);
	floodfill(252,182,WHITE);
	setfillstyle(SLASH_FILL,BLUE);
	floodfill(182,252,WHITE);
	setfillstyle(HATCH_FILL,GREEN);
	floodfill(200,105,WHITE);
	floodfill(210,105,WHITE);

	getch();
	closegraph();
	return 0;
}