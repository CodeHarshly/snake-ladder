#include<graphics.h>
#include<conio.h>
#include<iostream.h>
//#include<stdbool.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
union REGS in, out;
void start2();
void start();
void saved_game();
//void exit1();
int board[10][10]={{100,99,98,97,96,95,94,93,92,91},{81,82,83,84,85,86,87,88,89,90},80,79,78,77,76,75,74,73,72,71,61,62,63,64,65,66,67,68,69,70,60,59,58,57,56,55,54,53,52,51,41,42,43,44,45,46,47,48,49,50,40,39,38,37,36,35,34,33,32,31,21,22,23,24,25,26,27,28,29,30,20,19,18,17,16,15,14,13,12,11,1,2,3,4,5,6,7,8,9,10};
int x1[10]={136,176,216,256,296,336,376,416,456,496};
int y1[10]={68,108,148,188,228,268,308,348,388,428};
int y2[10]={42,82,122,162,202,242,282,322,362,402};
int g1,g2,g3,a,l;


void snake()
{
     int z=0,e=0;
      // 99 to 10
     for(int i=0;i<=160;i+=160)
     {
      setcolor(DARKGRAY);
      setfillstyle(SOLID_FILL,WHITE);
      ellipse(204+i,61,0,360,3,4);
      floodfill(204+i,61,DARKGRAY);
      ellipse(200+i,60,40,280,3,4);
      floodfill(200+i,60,DARKGRAY);
      setcolor(0);
      circle(200+i,60,1);
      circle(204+i,61,1);
      setfillstyle(SOLID_FILL,BLACK);
      floodfill(200+i,60,BLACK);
      floodfill(204+i,61,BLACK);

      setcolor(DARKGRAY);

      line(197+i,61,187+i,62);
      arc(189+i,66,90,180,4);
      ellipse(205+i,67,180,270,20,10);
      ellipse(200+i,60,50,150,4,8);
      ellipse(204+i,61,50,120,4,8);
      arc(206+i,60,0,90,5);
      ellipse(211+i,100,0,90,15,40);
      arc(197+i,42,250,280,30);
      ellipse(205+i,115,10,100,4,40);
     }
      ellipse(229,135,120,240,5,40);
      ellipse(212,136,120,240,5,40);
      //arc(400,160,183,270,175);
      //arc(400,160,183,270,191);
      arc(500,140,185,270,275);
      arc(500,140,185,250,292);
      arc(450,274,248,290,150);
      setfillstyle(SOLID_FILL,LIGHTBLUE);
      floodfill(220,140,DARKGRAY);
      arc(427,100,180,260,40);
      arc(427,100,180,260,58);
      arc(450,80,235,312,70);
      arc(435,75,240,317,85);
      setfillstyle(SOLID_FILL,LIGHTMAGENTA);
      floodfill(377,100,DARKGRAY);
      //76 to 45 & 42-2
      for( i=0;i<=120;i+=120)
     {
      setcolor(DARKGRAY);
      setfillstyle(SOLID_FILL,WHITE);
      ellipse(320-i,140+z,0,360,3,4);
      floodfill(320-i,140+z,DARKGRAY);
      ellipse(324-i,141+z,0,360,3,4);
      floodfill(324-i,141+z,DARKGRAY);
      setcolor(0);
      circle(320-i,140+z,1);
      circle(324-i,141+z,1);
      setfillstyle(SOLID_FILL,BLACK);
      floodfill(320-i,140+z,BLACK);
      floodfill(324-i,141+z,BLACK);

      setcolor(DARKGRAY);

      line(317-i,141+z,307-i,142+z);
      arc(309-i,146+z,90,180,4);
      ellipse(325-i,147+z,180,270,20,10);
      ellipse(320-i,140+z,50,150,4,8);
      ellipse(324-i,141+z,50,120,4,8);
      arc(326-i,140+z,0,90,5);
      ellipse(331-i,180+z,0,90,15,40);
      arc(317-i,122+z,250,280,30);
      ellipse(325-i,195+z,10,100,4,40);

      arc(367-i,210+z,180,102,20);
      arc(367-i,210+z,200,92-e,37);
      arc(360-i,203+z,152,210,14);
      arc(369-i,207+z,180,204,40);
      z=120;
      e=103;
      }
      arc(380,251,100,190,80);
      arc(375,263,100,180,73);

      setfillstyle(SOLID_FILL,LIGHTCYAN);
      floodfill(367,185,DARKGRAY);
      floodfill(342,180,DARKGRAY);
      arc(255,370,93,180,78);
      arc(255,372,100,245,63);
      arc(250,360,180,252,73);
      setfillstyle(SOLID_FILL,BROWN);
      floodfill(247,305,DARKGRAY);
      floodfill(210,280,DARKGRAY);
}
void ladder1()
{
	//ladder 60 40
      setcolor(BROWN);
      line(130,290,130,230);
      line(128,290,128,230);
      line(130,290,128,290);
      line(130,230,128,230);
      line(154,290,154,230);
      line(152,290,152,230);
      line(154,290,152,290);
      line(154,230,152,230);
      line(152,248,130,248);
      line(152,250,130,250);
      line(152,270,130,270);
      line(152,272,130,272);
      setfillstyle(SOLID_FILL,BROWN);
      floodfill(129,232,BROWN);
      floodfill(153,232,BROWN);
      floodfill(132,249,BROWN);
      floodfill(132,271,BROWN);
      //ladder 5-26 & 78-97
      int gb=0;
      for(int g=0;g<=80;g+=80)
      {

       line(289-g,405-gb,330-g,345-gb);
       line(291-g,406-gb,332-g,346-gb);
       line(291-g,406-gb,289-g,405-gb);
       line(332-g,346-gb,330-g,345-gb);
       line(308-g,416-gb,349-g,356-gb);
       line(310-g,417-gb,351-g,357-gb);
       line(308-g,416-gb,310-g,417-gb);
       line(349-g,356-gb,351-g,357-gb);
       floodfill(290-g,405-gb,BROWN);
       floodfill(309-g,416-gb,BROWN);
       line(303-g,389-gb,320-g,400-gb);
       line(304-g,387-gb,321-g,398-gb);
       line(317-g,369-gb,332-g,379-gb);
       line(318-g,367-gb,333-g,377-gb);
       floodfill(305-g,389-gb,BROWN);
       floodfill(319-g,369-gb,BROWN);
       gb=gb+280;
      }
	  //ladder 94 12
      line(368,69,448,370);
      line(366,70,446,371);
      line(368,69,366,70);
      line(448,370,446,371);
      line(393,65,473,366);
      line(395,64,475,365);
      line(393,65,395,64);
      line(473,366,475,365);
      floodfill(367,71,BROWN);
      floodfill(394,66,BROWN);
      line(375,95,400,89);
      line(373,93,398,87);
      floodfill(376,94,BROWN);
      line(378,117,404,110);line(380,119,405,112);
      floodfill(385,117,BROWN);
      line(384,141,410,135);line(386,143,412,137);
      floodfill(390,141,BROWN);
      line(392,164,417,158);line(394,166,419,160);
      floodfill(398,164,BROWN);
      line(398,187,423,181);line(400,189,425,183);
      floodfill(405,187,BROWN);
      line(403,210,429,204);line(405,212,431,206);
      floodfill(410,210,BROWN);
      line(410,234,435,228);line(412,236,437,230);
      floodfill(416,234,BROWN);
      line(415,258,441,252);line(417,260,443,254);
      floodfill(421,258,BROWN);
      line(422,282,448,276);line(424,284,450,278);
      floodfill(428,282,BROWN);
      line(428,306,454,300);line(430,308,456,302);
      floodfill(434,306,BROWN);
      line(435,330,461,324);line(437,332,463,326);
      floodfill(441,330,BROWN);
      line(441,352,467,346);line(442,354,469,348);
      floodfill(447,352,BROWN);
	 //ladder 44 77   */
      rectangle(247,150,249,250);
      floodfill(248,151,BROWN);
      rectangle(272,150,274,250);
      floodfill(273,151,BROWN);
      rectangle(249,169,272,171);
      floodfill(250,170,BROWN);
      rectangle(249,189,272,191);
      floodfill(250,190,BROWN);
      rectangle(249,209,272,211);
      floodfill(250,210,BROWN);
      rectangle(249,229,272,231);
      floodfill(250,230,BROWN);
}
void display_board(int u, int v)
{
     int x=94,y=58,num=0,t,h,f1=0,f2=0;
     cleardevice();
     char s[5];
     g1=u;
     g2=v;

     setfillstyle(SOLID_FILL,YELLOW);
     floodfill(10,10,YELLOW);
     setcolor(LIGHTGREEN);
     rectangle(115,35,525,445);

     setfillstyle(SOLID_FILL,DARKGRAY);
     floodfill(116,36,LIGHTGREEN);
     rectangle(120,40,520,440);
     line(160,40,160,440);
     line(200,40,200,440);
     line(240,40,240,440);
     line(280,40,280,440);
     line(320,40,320,440);

     line(360,40,360,440);
     line(400,40,400,440);
     line(440,40,440,440);
     line(480,40,480,440);
     line(120,80,520,80);
     line(120,120,520,120);
     line(120,160,520,160);
     line(120,200,520,200);
     line(120,240,520,240);
     line(120,280,520,280);
     line(120,320,520,320);
     line(120,360,520,360);
     line(120,400,520,400);
     for(int m=1;m<=10;m++)
     {
	  for(int n=1;n<=10;n++)
	  {
	      num=num+1;
	      if(x<470)
	      {
		x=x+40;
	      }
	      else{
		 x=124;
	      }
	      if(num%2!=0)
	      {
		   setfillstyle(SOLID_FILL,LIGHTRED);
		   floodfill(x,y,LIGHTGREEN);
	      }
	      if(num%2==0)
	      {
		   setfillstyle(SOLID_FILL, WHITE);
		   floodfill(x,y,LIGHTGREEN);
	      }
	  }
	  num=num+1;
	  if(y>400)
	  y=58;
	  else
	  y=y+40;
     }

     //y=58;
     snake();
     ladder1();
     for(int i=0;i<10;i++)
     {
	  setcolor(0);
	  settextstyle(0,0,1);
	  for(int j=0;j<10;j++)
	  {
	      if(x<470)
	      {
		x=x+40;
	      }
	      else{
		x=134;
	      }
	      sprintf(s,"%d",board[i][j]);
	      if(board[i][j]>=10 && board[i][j]<=99)
	      {
		  //setcolor(0);
		  outtextxy(x,y,s);
	      }

	      else if(board[i][j]>=1 && board[i][j]<=9)
	      {
		  outtextxy(x+3,y,s);
	      }
	      else if(board[i][j]==100)
	      {
		  outtextxy(130,y,s);
	      }
	  }
	  if(y>400)
	  y=58;
	  else
	  y=y+40;
     }
     for(t=0;t<10;t++)
     {
	  for(h=0;h<10;h++)
	  {

	       if(u==board[t][h])
	       {
		 setcolor(BLUE);
		 setfillstyle(SOLID_FILL,BLUE);
		 rectangle(x1[h],y1[t],x1[h]+10,y1[t]+10);
		 floodfill(x1[h]+1,y1[t]+1,BLUE) ;
		 f1=1;
		 break;
	       }
	       else
		 continue;
	  }
	  if(f1==1)
	  {  break; }
     }

     for(t=0;t<10;t++)
     {
	  for(h=0;h<10;h++)
	  {
	       if(v==board[t][h])
	       {
		 setcolor(LIGHTGREEN);
		 setfillstyle(SOLID_FILL,LIGHTGREEN);
		 rectangle(x1[h],y2[t],x1[h]+10,y2[t]+10);
		 floodfill(x1[h]+1,y2[t]+1,LIGHTGREEN);
		 f2=1;
		 break;
	       }
	       else
		 continue;
	  }
	  if(f2==1)
	  {   break;  }
     }

}

void display_point( int m,int v,int u)
{
     char sum1[5],sum2[5];
     g3=m;
     sprintf(sum1,"%d",v);
     sprintf(sum2,"%d",u);
     settextstyle(1,0,1);
     if(m==1)
     {
      setcolor(GREEN);
      rectangle(5,295,115,370);
      setfillstyle(SOLID_FILL,GREEN);
      floodfill(20,320,GREEN);
      setcolor(BLACK);
      rectangle(525,295,635,370);
      setfillstyle(SOLID_FILL,WHITE);
      floodfill(530,320,BLACK);
     }
     if(m==2)
     {
      setcolor(BLACK);
      rectangle(5,295,115,370);
      setfillstyle(SOLID_FILL,WHITE);
      floodfill(20,320,BLACK);
      setcolor(GREEN);
      rectangle(525,295,635,370);
      setfillstyle(SOLID_FILL,GREEN);
      floodfill(530,320,GREEN);
     }
     for(int i=0;i<=520;i+=520)
     {
      setcolor(LIGHTGRAY);
      rectangle(15+i,305,105+i,360);
      setfillstyle(SOLID_FILL,LIGHTGRAY);
      floodfill(16+i,306,LIGHTGRAY);
      setcolor(WHITE);
      rectangle(25+i,335,95+i,355);
      setfillstyle(SOLID_FILL,WHITE);
      floodfill(26+i,336,WHITE);
     }
     setcolor(BLUE);
     outtextxy(23,308,"Player 1");
     outtextxy(55,333,sum1);
     setcolor(LIGHTGREEN);
     outtextxy(543,308,"Player 2");
     outtextxy(575,333,sum2);
}
void diceno(int e,int q)
{
     int k=0;
     if(e==2)
     {
	k=520;
     }
     setcolor(0);
     setfillstyle(SOLID_FILL,BLACK);
     int i=0,j=0;
     if(q==6)
     {
	  for(j=0;j<=12;j+=12)
	  for(i=0;i<=15;i+=7)
	  {
	      circle(55+j+k,385+i,2);

	      floodfill(55+j+k,385+i,BLACK);
	  }
     }
     if(q==5||q==4)
     {
	  for(i=0;i<=15;i+=15)
	  for(j=0;j<=15;j+=15)
	  {
	      circle(53+i+k,385+j,2);
	      floodfill(53+i+k,385+j,BLACK);
	      if(q==5)
	      {
		 circle(60+k,392,2);
		 floodfill(60+k,392,BLACK);
	      }
	  }
     }
     if(q==1||q==2||q==3)
     {
	  if(q==1||q==3)
	  {
	      circle(60+k,392,2);
	      floodfill(60+k,392,BLACK);
	  }
	  if(q==2||q==3)
	  {
	     for(i=0;i<=15;i+=15)
	     {

		 circle(53+i+k,385+j,2);
		 floodfill(53+i+k,385+j,BLACK);
		 j=15;
	     }
	  }
     }
}
void dice()
{
	char out[5];
	sprintf(out,"%d",a);
	setcolor(0);
	rectangle(45,378,75,408);
	rectangle(565,378,595,408);
	rectangle(577,27,603,63);  //exit
	rectangle(580,30,600,60);
	line(585,35,600,30);
	line(585,55,600,60);
	line(585,35,585,55);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(46,379,BLACK);
	floodfill(566,379,BLACK);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(578,28,BLACK);
	floodfill(599,40,BLACK);
	setfillstyle(SOLID_FILL,BLUE);
	floodfill(581,40,BLACK);
	if(l==1)
	{
	       settextstyle(1,0,1);
	       setcolor(BLUE);
	       //outtextxy(57,380,out);

	       setcolor(0);
	       rectangle(577,420,583,440);
	       line(574,420,586,420);
	       line(580,410,574,420);
	       line(580,410,586,420);
	       setfillstyle(SOLID_FILL,BLACK);
	       floodfill(578,421,BLACK);
	       floodfill(580,415,BLACK);
		 settextstyle(1,0,1);
	       outtextxy(536,450,"Click here");
	       diceno(1,a);
	}
	if(l==2)
	{
	       settextstyle(1,0,1);
	       setcolor(LIGHTGREEN);
	       //outtextxy(577,380,out);

	       setcolor(0);
	       rectangle(57,420,63,440);
	       line(54,420,66,420);
	       line(60,410,54,420);
	       line(60,410,66,420);
	       setfillstyle(SOLID_FILL,BLACK);
	       floodfill(58,421,BLACK);
	       floodfill(60,415,BLACK);
		settextstyle(1,0,1);
	       outtextxy(16,450,"Click here");
	       diceno(2,a);
	}
}
void exitlayout()
{
	 settextstyle(1,0,1);
	 setcolor(RED);
	 rectangle(153,183,447,277);
	 rectangle(154,184,446,276);
	 rectangle(155,185,445,275);
	 setfillstyle(SOLID_FILL,LIGHTGREEN);
	 floodfill(157,187,RED);
	 rectangle(160,190,440,270);
	 setfillstyle(SOLID_FILL,RED);
	 floodfill(165,195,RED);
	 setcolor(0);
	 rectangle(193,230,242,259);
	 rectangle(343,230,382,259);
	 setfillstyle(SOLID_FILL,LIGHTGREEN);
	 floodfill(194,231,BLACK);
	 floodfill(344,231,BLACK);
	 rectangle(195,232,240,257);
	 rectangle(345,232,380,257);
	 setfillstyle(SOLID_FILL,BLUE);
	 floodfill(201,233,BLACK);
	 floodfill(351,233,BLACK);
	 setcolor(WHITE);
	 outtextxy(180,200,"Are you sure want to exit");
	 outtextxy(200,232,"YES");
	 outtextxy(350,232,"NO");
}

void warning1(int y)
{
	 char a;  int o=0;
	 exitlayout();
	 /*

	 rectangle(160,190,460,260);
	 setfillstyle(SOLID_FILL,RED);
	 floodfill(165,195,RED);
	 setcolor(WHITE);
	 outtextxy(180,200,"Are you sure want to exit");*/
	 setcolor(WHITE);
	 settextstyle(2,0,5);
	 outtextxy(245,225," Enter Y for ");
	 outtextxy(245,237,"YES or N for ");
	 outtextxy(245,250,"     NO");
	 while(o==0){
	 a=getch();
	 a=toupper(a);
	 settextstyle(1,0,1);
	 if(y==2)
	 {
	 switch(a)
	 {
	   case 'Y':  start2();
		      o=1;
		      break;
	   case 'N':
		      display_board(g1,g2);
		      display_point(g3,g1,g2);
		      dice();
		      getch();
		      o=1;
		      break;
	   default:   setcolor(RED);

		      outtextxy(150,460,"Enter the given choice");
		      break;
	 }
	 }
	 if(y==1)
	 {
	 switch(a)
	 {
	   case 'Y': exit(0);
		      o=1;
		      break;
	   case 'N':
		       start2();
		       o=1;
		      break;
	   default:   setcolor(RED);
		      outtextxy(150,461,"Enter the given choice");
		      break;
	 }
	 }
	 }
}
void check(char c)
{
	 c=toupper(c);
	 if(c=='E')
	 {
	      warning1(2);
	 }
}
void check2()
{
	char x1;
	do{
	      x1=getch();
	      x1=toupper(x1);
	      if(x1=='A')
	      {start();}
	      else if(x1=='H')
	      {start2();}
	      else
	      {  outtextxy(150,460,"Enter the given choice");}
	  }while(x1!='A' && x1!='H');
}
void charcheck(char ch)
{
       int f=0;
       do{
       ch=toupper(ch);
       switch(ch)
       {
	 case 'S':  start();
		    f=1;
		    break;
	 case 'E':  warning1(1);
		    f=1;
		    break;
	 default :  outtextxy(150,461,"Enter the given choice");
		    break;
       }
       if(f==0)
       {ch=getch(); }
       }while(f==0);
}
void gameover(int v,int u)
{
     setcolor(YELLOW);
     rectangle(240,160,400,360);
     rectangle(245,165,395,355);
     rectangle(287,257,353,288);
     rectangle(290,260,350,285);
     rectangle(287,302,353,333);
     rectangle(290,305,350,330);
     setfillstyle(SOLID_FILL,LIGHTGREEN);
     floodfill(241,161,YELLOW);
     setfillstyle(SOLID_FILL,BLUE);
     floodfill(246,166,YELLOW);
     setfillstyle(SOLID_FILL,LIGHTGREEN);
     floodfill(288,258,YELLOW);
     floodfill(288,303,YELLOW);
     setfillstyle(SOLID_FILL,CYAN);
     floodfill(291,261,YELLOW);
     floodfill(291,306,YELLOW);
     settextstyle(0,0,1);
     setcolor(LIGHTGREEN);
     outtextxy(295,265,"PLAY ");
     outtextxy(307,273,"AGAIN");
     outtextxy(305,314,"HOME");

     settextstyle(7,0,2);
     setcolor(LIGHTMAGENTA);
     if(v>u)
     {
      outtextxy(270,180,"PLAYER 1");
     }
     if(v<u)
     {
      outtextxy(270,180,"PLAYER 2");
     }
     outtextxy(300,215,"WIN");
}
/*bool tf()
{
  return false;
}*/
int initMouse()
{
    in.x.ax = 1;
    int86(0X33, &in, &out);
    return out.x.ax;
}
void showMouse()
{
    in.x.ax = 1;
    int86(0X33, &in, &out);
}
void getMousePosition(int* click, int* x, int* y)
{
    in.x.ax = 3;
    int86(0X33, &in, &out);
    *click = out.x.bx;
    *x = out.x.cx;
    *y = out.x.dx;
}
void exit1(int h)
{
	 exitlayout();
	 int status, i, click,x,y,fl;
	 char x1;
	 status = initMouse();
	 if (status == 0)
	 {
	    outtextxy(10,10,"Mouse support ");
	    outtextxy(10,30,"not available");
	    x1=getch();
	    check(x1);
	 }
	 else {
		showMouse();
		getMousePosition(&click, &x, &y);
		do {
		     fl=0;
		     getMousePosition(&click, &x, &y);
		     /*	char ou[5];
		     sprintf(ou,"%d",x);
		     char ou2[5];
		     sprintf(ou2,"%d",y);  */
		     if (click != 0)
		     {
			 // outtextxy(20,60,ou);
			 //outtextxy(20,80,ou2);
			if(h==1)
			{
			    if(x>=345&&x<=380&&y>=232&&y<=257)
			    {
			      fl=1;
			      start2();
			    }
			    else if(x>=195&&x<=240&&y>=232&&y<=257)
			    { exit(0); }
			}
			else if(h==2)
			{
			    if(x>=345&&x<=380&&y>=232&&y<=257)
			    { //fl=1;
			       display_board(g1,g2);
			       display_point(g3,g1,g2);
			       dice();
			       break;
			    }
			    else if(x>=195&&x<=240&&y>=232&&y<=257)
			    { start2(); }
			}
	    }
	}while(fl==0);

    }
}
void mouse(int u)
{

    int status, i, click,x,y,fl;
    char x1;
    status = initMouse();
    if (status == 0)
     {
	settextstyle(1,0,1);
	if(u==1)
	{
	  outtextxy(10,10,"Mouse support ");
	  outtextxy(10,30,"not available");
	  outtextxy(110,440," Enter your choice 'S' for start or 'E' for exit");
	  x1=getch();
	  charcheck(x1);
	}
	if(u==2||u==3)
	{
	  outtextxy(10,10,"Mouse support ");
	  outtextxy(10,30,"not available");
	  outtextxy(140,440,"Press any key to continue or 'E' to exit");
	  x1=getch();
	  check(x1);
	}
	if(u==4)
	{
	  outtextxy(10,10,"Mouse support ");
	  outtextxy(10,30,"not available");
	  outtextxy(140,435,"Press 'A' to play again or 'H' to go to home");
	  check2();
	}
      }
    else {
	showMouse();
	getMousePosition(&click, &x, &y);
	do {
	     fl=0;
	    getMousePosition(&click, &x, &y);
	      /*	char ou[5];
		sprintf(ou,"%d",x);
		char ou2[5];
		sprintf(ou2,"%d",y); */
	    if (click != 0)
	  { // outtextxy(20,20,ou);
	   //outtextxy(20,40,ou2);
	   if(u==1)
	   {
		 if(x>=250&&x<=350&&y>=110&&y<=135)
		 { fl=1;
		  start();
		 }
		 else if(x>=250&&x<=350&&y>=200&&y<=225)
		 { exit1(1);}
		 else if(x>=250&&x<=350&&y>=155&&y<=180)
		 {
		  fl=1;
		  saved_game();
		 }
	    }
	    if(u==2)
	    {
		 if(x>=45&&x<=75&&y>=378&&y<=408)
		 {
		    //fl==1;
		    break;
		 }
		 if(x>=580&&x<=600&&y>=30&&y<=60)
		 {
		   exit1(2);
		   //fl==1;
		 }
	    }
	    if(u==3)
	    {
		 if(x>=565&&x<=595&&y>=378&&y<=408)
		 {
		   // fl==1;
		    break;
		 }
		  if(x>=580&&x<=600&&y>=30&&y<=60)
		 {
		   exit1(2);
		   //fl==1;
		 }
	    }
	    if(u==4)
	    {	 if(x>=290&&x<=350&&y>=260&&y<=285)
		 {
		   start();
		 }
		 if(x>=290&&x<=350&&y>=305&&y<=330)
		 {
		   start2();
		 }
	    }
	    if(u==5)
	    {
		 if(x>=280&&x<=340&&y>=210&&y<=230)
		 {
		   start2();
		   fl=1;
		 }
	    }
	    }
	}while(fl==0);

    }

}

void start()
{
	int i,b=2,c,suma=0,sumb=0,ch;
	char x,suma1[5],sumb1[5];

	display_board(suma,sumb);
	display_point(1,suma,sumb);
	l=2;
	dice();
	setcolor(4);
	outtextxy(190,460," Let's roll the dice \n");
	randomize();
	for(i=1;i<200&&suma<100&&sumb<100;i++)
	{
		setcolor(4);

		mouse(b);
		ch=random(6);
		a=1+ch;

		if(i%2!=0)
		{
			suma=suma+a;
			if(suma==5)
			suma=26;
			if(suma==44)
			suma=77;
			if(suma==12)
			suma=94;
			if(suma==40)
			suma=60;
			if(suma==78)
			suma=97;
			//if(suma==51)
		      //	suma=87;
			/*if(suma==99)
			suma=10;
			if(suma==42)
			suma=3;
			if(suma==95)
			suma=71;
			if(suma==57)
			suma=22;
			if(suma==33)
			suma=14;
			if(suma==76)
			suma=45;  */

			if(suma>100)
			suma=suma-a;
			//mouse(2);
			display_board(suma, sumb);
			display_point(2,suma,sumb);
			l=1;
			dice();
		       b=3;

		}
		if(i%2==0)
		{

			sumb=sumb+a;
			if(sumb==5)
			sumb=26;
			if(sumb==44)
			sumb=77;
			if(sumb==12)
			sumb=94;
			if(sumb==40)
			sumb=60;
			if(sumb==78)
			sumb=97;
			//if(sumb==51)
			//sumb=87;
			/*if(sumb==99)
			sumb=10;
			if(sumb==42)
			sumb=3;
			if(sumb==95)
			sumb=71;
			if(sumb==57)
			sumb=22;
			if(sumb==33)
			sumb=14;
			if(sumb==76)
			sumb=45;*/
			if(sumb>100)
			sumb=sumb-a;
			//mouse(3);
			display_board(suma, sumb);
			display_point(1,suma,sumb);
			l=2;
			dice();b=2;

     }
	}
	/*if(suma>sumb)
	{
		setcolor(12);
		outtextxy(200,420,"player 1 win");
		outtextxy(160,490,"Press any key to go to menu");
		getch();
	}
if(sumb>suma)
	{
		setcolor(14);
		outtextxy(200,420,"player 2 win");
		outtextxy(160,490,"Press any key to go to menu");
		getch();
	}   */
	gameover(suma,sumb);
	mouse(4);
}
void saved_game()
{
     cleardevice();
     setcolor(RED);
     settextstyle(1,0,1);
     rectangle(196,146,424,254);
     rectangle(200,150,420,250);
     setfillstyle(SOLID_FILL,RED);
     floodfill(197,147,RED);
     setfillstyle(SOLID_FILL,LIGHTRED);
     floodfill(201,151,RED);
     outtextxy(225,170,"Under construction");
     rectangle(278,208,342,232);
     rectangle(279,209,341,231);
     rectangle(280,210,340,230);
     setfillstyle(SOLID_FILL,GREEN);
     floodfill(281,201,RED);
     settextstyle(0,0,1);
     outtextxy(283,215,"Go Back");
     //delay(2000);
     mouse(5);
     //getch();
}
void ladder2(int c)
{
      int z;
      if(c==2)
      {
	 z=80;
      }
      else{
	 z=0;
      }


      setcolor(BROWN);
      setfillstyle(SOLID_FILL,BROWN);
      rectangle(450,100+z,452,200+z);
      floodfill(451,101+z,BROWN);
      rectangle(475,100+z,477,200+z);
      floodfill(476,101+z,BROWN);
      rectangle(452,119+z,475,121+z);
      floodfill(453,120+z,BROWN);
      rectangle(452,139+z,475,141+z);
      floodfill(453,140+z,BROWN);
      rectangle(452,159+z,475,161+z);
      floodfill(453,160+z,BROWN);
      rectangle(452,179+z,475,181+z);
      floodfill(453,180+z,BROWN);
      if(c==2)
      {
	floodfill(451,222,BROWN);
	floodfill(476,222,BROWN);
      }
}

void snake4()
{
      int k=100;
      ladder2(2);
      setcolor(DARKGRAY);
      setfillstyle(SOLID_FILL,WHITE);
      ellipse(320+k,140,0,360,3,4);
      floodfill(320+k,140,DARKGRAY);
      ellipse(324+k,141,0,360,3,4);
      floodfill(324+k,141,DARKGRAY);
      setcolor(0);
      circle(320+k,140,1);
      circle(324+k,141,1);
      setfillstyle(SOLID_FILL,BLACK);
      floodfill(320+k,140,BLACK);
      floodfill(324+k,141,BLACK);
      setcolor(DARKGRAY);
      line(317+k,141,307+k,142);
      arc(309+k,146,90,180,4);
      ellipse(325+k,147,180,270,20,10);
      ellipse(320+k,140,50,150,4,8);
      ellipse(324+k,141,50,120,4,8);
      arc(326+k,140,0,90,5);
      ellipse(331+k,180,0,90,15,40);
      arc(317+k,122,250,280,30);
      ellipse(325+k,195,10,100,4,40);
      arc(367+k,210,180,102,20);
      arc(367+k,210,200,92,37);

      //ladder2(2);

      setcolor(DARKGRAY);
      arc(360+k,203,152,210,14);
      arc(369+k,207,180,204,40);
      arc(380+k,251,100,190,80);
      arc(375+k,263,100,180,73);
      setfillstyle(SOLID_FILL,LIGHTGREEN);
      floodfill(367+k,185,DARKGRAY);
      floodfill(342+k,180,DARKGRAY);     //*/
      ladder2(1);

}
void start2()
{
     setcolor(8);
     settextstyle(1,0,2);
     char ch;
     do{
	    cleardevice();
	    setcolor(DARKGRAY);
	    rectangle(105,55,530,360);
	    rectangle(104,54,531,361);
	    rectangle(103,53,532,362);
	    setfillstyle(SOLID_FILL,LIGHTRED);
	    floodfill(108,68,DARKGRAY);
	    setcolor(10);
	    settextstyle(0,0,2);
	    outtextxy(140,70,"!! SNAKE AND LADDER !! ");
	    snake4();
	    delay(900);
	    setcolor(0);
	    rectangle(245,105,355,140);
	    rectangle(250,110,350,135);
	    rectangle(245,150,355,185);
	    rectangle(250,155,350,180);
	    rectangle(245,195,355,230);
	    rectangle(250,200,350,225);
	    setfillstyle(SOLID_FILL,YELLOW);
	    floodfill(246,106,BLACK);
	    floodfill(246,151,BLACK);
	    floodfill(246,196,BLACK);
	    setcolor(10);
	    outtextxy(262,115,"Start");
	    outtextxy(262,160,"Saved");
	    outtextxy(270,205,"Exit ");
	    mouse(1);
     }while(ch!='E');
     getch() ;
}
void snake3(int i)
{
      int d=250;//,GR=i;
      //setcolor(GREEN);
      //rectangle(0,200,600,400);
      //setfillstyle(SOLID_FILL,GR);
      //floodfill(1,201,GREEN);
      setcolor(DARKGRAY);
      setfillstyle(SOLID_FILL,WHITE);
      ellipse(204+i,61+d,0,360,3,4);
      floodfill(204+i,61+d,DARKGRAY);
      ellipse(200+i,60+d,40,280,3,4);
      floodfill(200+i,60+d,DARKGRAY);
      setcolor(0);
      circle(200+i,60+d,1);
      circle(204+i,61+d,1);
      setfillstyle(SOLID_FILL,BLACK);
      floodfill(200+i,60+d,BLACK);
      floodfill(204+i,61+d,BLACK);
      setcolor(DARKGRAY);
      line(197+i,61+d,187+i,62+d);
      arc(189+i,66+d,90,180,4);
      ellipse(205+i,67+d,180,270,20,10);
      ellipse(200+i,60+d,50,150,4,8);
      ellipse(204+i,61+d,50,120,4,8);
      arc(206+i,60+d,0,90,5);
      ellipse(211+i,100+d,0,90,15,40);
      arc(197+i,42+d,250,280,30);
      ellipse(205+i,115+d,10,100,4,40);     //d=250

      arc(246+i,350,180,345,20);
      arc(246+i,350,180,325,37);
      arc(293+i,380,25,150,37);
      arc(293+i,380,20,155,19);
      arc(346+i,360,195,360,20);
      arc(338+i,360,195,360,30);
      arc(365+i,380,82,86,20);
      setfillstyle(SOLID_FILL,YELLOW);
      floodfill(246+i,380,DARKGRAY);

      //getch();
      //exit(0);
}
void welcoming()
{
     int k=160,LI=0;
     for(int i=0;i<40;i++)
     {
	  //
	  cleardevice();
	  setfillstyle(SOLID_FILL,LI+i);
	 // floodfill(10,10,LIGHTGREEN);
	  settextstyle(0,0,5);
	  setcolor(1+i);
	  outtextxy(40,70,"SNAKE");
	  outtextxy(240,110,"AND");
	  outtextxy(350,150,"LADDER ");
	  k=k-2;
	  snake3(k);
	  delay(200);
     }
     getch();
}
void main()
{

     int gd=DETECT,gm;
     initgraph(&gd,&gm,"C:\\TC\\BGI ");
     //setbkcolor(LIGHTGREEN);
     //welcoming();
     start2();
     getch();
     closegraph();
}
