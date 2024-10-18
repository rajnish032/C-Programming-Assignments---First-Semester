#include<stdio.h>

#include<conio.h>

//#include<graphics.h>
#include<dos.h>

void main()

{

int gd=DETECT,gm;

initgraph(&gd,&gm,"c://tc//bgi");



rectangle(20,10,510,450);

rectangle(25,15,505,445);

rectangle(30,20,500,440);



settextstyle(1,0,1);

outtextxy(60,30,"JAI SHRI KRISHNA ");



//______________TILAK___________

line(265,20,270,90);    delay(80);

line(270,20,275,85);    delay(80);

line(270,90,286,114);    delay(80);

line(275,85,287,105);    delay(80);



line(315,20,310,90);     delay(80);

line(310,20,305,85);     delay(80);

line(310,90,286,114);    delay(80);

line(305,85,287,105);    delay(80);



setfillstyle(1,15);

floodfill(267,25,15);



setcolor(1);

line(265,20,270,90);      delay(80);

line(270,20,275,85);       delay(80);

line(270,90,286,114);      delay(80);

line(275,85,287,105);       delay(80);



line(315,20,310,90);        delay(80);

line(310,20,305,85);        delay(80);

line(310,90,286,114);       delay(80);

line(305,85,287,105);       delay(80);

line(265,20,315,20);        delay(80);



setfillstyle(1,1);

floodfill(273,25,1);



setcolor(4);

line(285,20,294,20);         delay(80);

ellipse(290,32,167,12,5,55); delay(80);

setfillstyle(1,12);

floodfill(291,34,4);



//___________MUKUT____________

line(316,20,500,20);            delay(90);

line(500,20,500,76);             delay(90);

line(316,20,314,58);            delay(90);

ellipse(404,30,200,360,95,25);   delay(90);



setfillstyle(1,14);

floodfill(406,34,4);



ellipse(420,60,200,340,85,40);     delay(90);

line(313,55,340,75);               delay(90);

floodfill(422,62,4);



//_____________FACE__________

setcolor(1);

line(315,20,310,90);             delay(90);

line(305,303,336,340);           delay(90);

line(410,415,390,440);       delay(90);

line(410,415,407,413);            delay(90);



line(310,90,286,114);                 delay(90);

line(390,438,500,440);                delay(90);

line(298,269,347,286);                delay(90);

ellipse(420,60,200,340,85,40);        delay(90);



line(313,55,340,75);                delay(90);

line(500,20,500,440);               delay(90);

ellipse(313,296,240,300,25,7);      delay(90);



line(325,302,350,284);              delay(90);

ellipse(293,129,130,280,10,20);     delay(90);

ellipse(400,385,320,90,12,44);      delay(90);



line(335,340,350,355);              delay(90);

line(405,342,350,355);             delay(90);

line(295,148,270,246);             delay(90);



//_______NOSE__________

ellipse(292,240,210,320,26,8);      delay(90);

arc(303,236,310,100,13);            delay(90);

line(303,248,299,270);             delay(90);



setfillstyle(1,1);

floodfill(323,317,1);



//_____________HAND______________

setcolor(15);

line(305,304,240,325);                 delay(90);

line(240,325,220,430);                 delay(90);

line(305,305,336,340);                 delay(90);



ellipse(290,327,355,170,33,5);         delay(90);

ellipse(302,340,360,90,30,10);         delay(90);



line(260,337,300,330);                 delay(90);

line(270,352,330,340);                 delay(90);

line(270,352,265,363);                 delay(90);

line(330,340,357,332);                  delay(90);



ellipse(346,337,300,70,30,6);          delay(90);

line(310,365,359,342);                 delay(90);

line(310,365,290,435);                 delay(90);

line(220,430,290,435);                 delay(90);

setfillstyle(1,1);

floodfill(290,390,15);



setcolor(4);

circle(276,344,8);                      delay(90);

setfillstyle(1,14);

floodfill(276,344,4);



//_______________EYE_____________

setcolor(11);

line(310,188,420,155);            delay(90);

ellipse(307,176,300,45,7,15);     delay(90);

ellipse(365,271,70,130,80,140);      delay(90);

line(393,140,420,155);              delay(90);



setfillstyle(1,3);

floodfill(343,147,11);



setcolor(0);

line(310,188,302,196);             delay(90);

ellipse(298,181,280,340,37,13);    delay(90);

line(330,188,400,162);             delay(90);

line(310,188,402,160);             delay(90);

setfillstyle(1,0);

floodfill(308,191,0);



//__________LIPS_________

setcolor(12);

arc(300,279,90,270,8);            delay(90);

line(300,270,347,284);            delay(90);

ellipse(323,283,208,360,25,7);    delay(90);



setfillstyle(1,4);

floodfill(303,276,12);



arc(303,296,90,270,7);           delay(90);

ellipse(313,296,240,300,25,7);   delay(90);

line(325,302,350,284);           delay(90);

arc(350,282,295,90,5);           delay(90);

floodfill(323,297,12);



//________________EYEBROWS___________

setcolor(0);

ellipse(362,158,85,152,70,50);            delay(90);

ellipse(370,157,40,90,80,50);            delay(90);

ellipse(362,164,85,152,70,50);            delay(90);

ellipse(370,163,40,90,80,50);             delay(90);



line(300,134,301,140);            delay(80);

line(430,125,432,131);            delay(80);



setfillstyle(1,0);

floodfill(429,127,0);

floodfill(302,136,0);



//_____________FLUTE_______________

setcolor(15);

line(242,260,283,310);        delay(80);

line(210,288,245,325);        delay(80);

line(283,310,245,325);        delay(80);

line(210,288,242,260);        delay(80);

line(214,292,247,267);        delay(80);



setfillstyle(1,6);

floodfill(243,277,15);



line(328,356,411,415);   delay(80);

line(308,379,392,441);   delay(80);

line(308,381,328,357);   delay(80);

line(410,415,390,440);   delay(80);

setfillstyle(1,6);

floodfill(390,410,15);



setcolor(0);

circle(246,290,7);      delay(80);

circle(262,307,7);      delay(80);

circle(330,370,7);      delay(80);

circle(350,385,7);      delay(80);

circle(370,400,7);      delay(80);



setfillstyle(1,0);

floodfill(246,290,0);

floodfill(262,307,0);

floodfill(330,370,0);

floodfill(350,385,0);

floodfill(370,400,0);



//.....................................................



settextstyle(1,0,1);

setcolor(10);

outtextxy(40,50,"COMPUTER SOFT SKILLS");

setcolor(11);

outtextxy(120,70,"(ROHIT)");



//.......................................................



getch();

closegraph();

}
