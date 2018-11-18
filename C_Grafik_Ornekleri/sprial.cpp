#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

int main(){
	
//	initwindow(500,500,"window text",0,0);
	int gd=DETECT,gm,angle=0;
	struct arccoordstype a,b;
	initgraph(&gd,&gm,"X:\\TC\\BGI");
    delay(2000);
    while(angle<=360){
    	for(int r=25;r<500;r++){
    		
    		arc(getmaxx()/2,getmaxy()/2,angle,angle+2,r);
			getarccoords(&a);
    		circle(a.xstart,a.ystart,25);
    		angle=angle+5;
		delay(50);
		}
	}
	
	getch();
	closegraph();
	return 0;
}
