#include<stdio.h>
#include<graphics.h>

int main()
{
initwindow(800,500);// grafik penceresi olu�turur.
outtextxy(300,80,"TURK BAYRAGI"); //Ekrana Turk Bayra�� yazar.
setbkcolor(9); // Arka plan rengini ayarlar.

fillellipse(147,105,5,5);//Bu iki sat�r bayra��n solundaki 2 elipsi �izer.
fillellipse(147,395,5,5);

bar(145,395,150,105);//Bayrag�n yan�ndaki beyaz dikd�rtgeni �izer.

setfillstyle(1,4); // K�rm�z� dikd�rtgenin rengini ve desenini belirler.
setcolor(0); //�eklin kenar rengini belirler.

bar(150,390,550,110);//K�rm�z� dikd�rtgeni �izer.
setfillstyle(1,15);
setcolor(4);//�eklin kenar rengi

fillellipse(325,250,80,80); //Hilalin d��taki elipsini �izer
setfillstyle(1,4);
setcolor(4);
fillellipse(345,250,65,65);// hilalin i�indeki elipsi �izer.
setfillstyle(1,15);
setcolor(15);

//y�ld�z� �izen k�s�md�r poly fonksiyonu
int poly[22]={395,250,418,257,418,280,431,261,454,
269,440,250,453,231,431,238,417,220,417,243,395,250};
fillpoly(11,poly);

getch();
closegraph(); //Grafik ekran�n� kapat�r.
return 0;
}
