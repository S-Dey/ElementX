#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<fstream.h>
int menu();
int intro();
void smile();
void actinoids();
void download();
void periodic();
void loader();
int mainmenu();
void welcome();
void search();
void sname(char ch);
void show(int i);
void rhombus(int a,int b,int c,int d,int e ,int f, int g , int h);

class element //NAME-SYM-AT NO-mass-AT RADII-1 I.E-density-elecneg
{ public:
char name[20];
char sym[5];
char no[5];
char mass[10];
char radii[10];
char ie1[10];
char density[10];
char elecneg[10];
}trial[90];

void main()
{



       int gd=DETECT,gm;
	 initgraph(&gd,&gm,"c:\\tc\\bgi") ;
       cleardevice();
       loader();
       intro();
       delay(1000);
       cleardevice();
       mainmenu();
     getch();
}
void  welcome()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy ;

   /* initialize graphics, local variables*/
   initgraph(&gdriver, &gmode, "");

   midx = getmaxx() / 7;
   midy = getmaxy() / 2;

   /* loop through the fill patterns */
      /* set the fill style */
      for(int j=0;j<4;j++)
      {
	for(int i=0;i<=15;i++)
	{
		 setfillstyle(EMPTY_FILL, getmaxcolor());

      /* draw the 3-d bar */
		bar3d(midx-60, midy-60, midx+5, midy+5, 10, 1);
		settextstyle(6,HORIZ_DIR,6);
		setcolor(i+14);
		outtextxy(midx-40, midy-65, "W");
		delay(20);

		bar3d(midx+90, midy-60, midx+30, midy+5, 10, 1);
		settextstyle(6,HORIZ_DIR,6);
		setcolor(i+3);
		outtextxy(midx+45, midy-65, "E");
		delay(20);

		bar3d(midx+110, midy-60, midx+175, midy+5, 10, 1);
		settextstyle(6,HORIZ_DIR,6);
		setcolor(i+9);
		outtextxy(midx+130, midy-65, "L");
		delay(20);

		bar3d(midx+200, midy-60, midx+260, midy+5, 10, 1);
		settextstyle(6,HORIZ_DIR,6);
		setcolor(i+12);
		outtextxy(midx+210, midy-65, "C");
		delay(20);


		bar3d(midx+280, midy-60, midx+340, midy+5, 10, 1);
		settextstyle(6,HORIZ_DIR,6);
		setcolor(i+5);
		outtextxy(midx+295, midy-65, "O");
		delay(20);

		setcolor(i+14);
		bar3d(midx+360, midy-60, midx+420, midy+5, 10, 1);
		settextstyle(6,HORIZ_DIR,6);
		setcolor(i+6);
		outtextxy(midx+370, midy-65, "M");

		delay(20);
		bar3d(midx+440, midy-60, midx+500, midy+5, 10, 1);
		settextstyle(6,HORIZ_DIR,6);
		setcolor(i+3);
		outtextxy(midx+455, midy-65, "E");


	    }
       }

}
int intro()
{

cleardevice();
cout<<"\n\n\t\t    -----------INTRODUCTION------------\n\n\n\n\n";
char z[50];
fstream fin;
fin.open("intro.txt",ios::in|ios::out);
while(fin)
{
fin.getline(z,50);
cout<<z;
}
cout<<"\n\n\n\n\n \t\t\t PRESS ANY KEY TO CONTINUE";
getch();

return(mainmenu());
fin.close();
}


void smile()
{
   setbkcolor (RED);
   setcolor(YELLOW);
   circle(180,170,40);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(180,170,YELLOW);

   setcolor(BLACK);
   setfillstyle(SOLID_FILL,BLACK);
   fillellipse(168,160,5,7);
   fillellipse(189,160,5,7);
   ellipse(180,180,205,360,20,9); //right
   ellipse(180,180,205,360,20,10);
   ellipse(180,180,205,320,20,11);
	delay(2000);
   setcolor(WHITE);
   settextstyle(6, HORIZ_DIR, 4);
   outtextxy(230,130, "Hi, Welcome to Knowledge");
   outtextxy(250,170, "          Portal!");
   delay(2000);
     settextstyle(5, HORIZ_DIR, 4);
   outtextxy (135,230, "I'm gonna help you today!");
   delay(1500);
   settextstyle(6, HORIZ_DIR,5);
   setcolor (YELLOW);
   outtextxy(202,285, "Are you ready?");
   setcolor (WHITE);
   delay (1200);
   settextstyle (6, 0, 2);
   outtextxy (190, 410, "Press any key to continue...");
   getch();

}
 void download()
 {//NAME-SYM-AT NO-mass-AT RADII-1 I.E-density-elecneg
  fstream iofil("table.txt",ios::in|ios::out|ios::app);

 for(int i=0;i<90;i++)
 {
   iofil>>trial[i].name>>trial[i].sym>>trial[i].no>>trial[i].mass>>trial[i].radii>>trial[i].ie1>>trial[i].density>>trial[i].elecneg;
 }


//delet this----------------*********
//closegraph();
setbkcolor(BLACK);
int sizeh=strlen(trial[0].name);
cout<<"checking output name : ";
outtextxy(350,50,trial[0].name);
cout<<"size : "<<sizeh;
getch();


 }

void loader()
{


	cleardevice();
	setbkcolor(0);
	rhombus(200,100,250,100,350,200,300,200);

	//Creating X:-
	setfillstyle(SOLID_FILL,4);             //1
	floodfill(210,105,WHITE);
	line(440,100,490,100);
	line(440,100,360,200);
	line(360,200,410,200);
	line(410,200,490,100);
	setfillstyle(SOLID_FILL, 2);        //2
	floodfill(445,105,WHITE);
	rhombus(360,250,405,250,470,350,425,350);
	setfillstyle(SOLID_FILL, 6);   //4
	floodfill(375,260,WHITE);
	rhombus(300,250,350,250,280,350,230,350);
	setfillstyle(SOLID_FILL,BLUE);   //3
	//Design ends.

	floodfill(310,275,WHITE);
	settextstyle(11, HORIZ_DIR,11);
	outtextxy(282,225,"E  L  E  M  E  N  T");
	settextstyle(11, HORIZ_DIR,11);
	outtextxy(282,400,"L  O  A  D  I  N  G");
	settextstyle (9, HORIZ_DIR, 1);
	setcolor (8);
	outtextxy (8, 430, "NKVS");
       setcolor(9);
	rectangle(282,420,435,425);

	for(int b=282; b<=435; b++)  //Loop for loading bar.
	{
		 line(b,420,b,425);
		delay(50);
	}
	cleardevice();
	welcome();
}





void rhombus(int a,int b,int c,int d,int e ,int f, int g , int h)
	{
		line(a,b,c,d);
		line(c,d,e,f);
		line(e,f,g,h);
		line(g,h,a,b);
	}


int menu()
     {
	cleardevice();
	int a;
	setbkcolor (WHITE);
	setcolor(BROWN);
	settextstyle (6, HORIZ_DIR, 5);
	outtextxy (20, 22, "Start");
	settextstyle (10,HORIZ_DIR, 5);
	setcolor(WHITE);
	setfillstyle (SOLID_FILL, LIGHTBLUE);//BOX 1
	 bar (50, 200, 180, 100);
	setfillstyle (SOLID_FILL, RED);//BOX 2
	 bar (255, 200, 385, 100);
	 setfillstyle (SOLID_FILL, GREEN);//BOX 3
	 bar (460, 200, 590, 100);
	 setfillstyle (SOLID_FILL, MAGENTA);//BOX 4
	 bar (255, 350, 385, 250);


	settextstyle (9, HORIZ_DIR, 5);
	outtextxy (95, 97, "1");//1
	outtextxy (300, 97, "2");//2
	outtextxy (510, 97, "3"); //3
	outtextxy (300, 240,"4");//4


	//all texts..

	settextstyle (6, HORIZ_DIR, 3);
	outtextxy (60, 170, "Show Table");//1
	outtextxy (288, 170, "Search");//2
	outtextxy (510, 170, "Help"); //3
	outtextxy (300, 320, "Back");//4


       char choice[3];
       char num;
       setcolor (RED);
       settextstyle(1,0,2);
       outtextxy(230,380,"Enter Your Choice!");
       num=(char)getch();
       sprintf( choice,"%c", num );
       outtextxy( 430, 380, choice );
       cleardevice();
       settextstyle (2, HORIZ_DIR, 5);
      switch(num)
       {
	case '1':periodic();
		 getch();
		 cleardevice();
		 return(menu());
	case '2':download();
		 search();
		 getch();
		 cleardevice();
		 return(menu());
	case '3':settextstyle (1, HORIZ_DIR, 3);
		 outtextxy(250,10,"!!HELP!!");
		 settextstyle (2, HORIZ_DIR, 5);
		 outtextxy(10,100,"-> PRESS KEYS ONLY. NO MOUSE SUPPORT IS THERE!");
		 outtextxy(10,120,"->RESTART THE PROGRAM IF PROBLEM PERSISTS.");
		 outtextxy(10,140,"->CHECK WHETHER YOUR GRAPHICS DRIVER IS COMPATIBLE OR NOT");
		 outtextxy(10,160,"FOR TECHNICAL ASSISTANCE, MAIL US: support.elementx@nkvs.com");
		 getch();
		 cleardevice();
		 return(menu());
	case '4':mainmenu();

	default :return(menu());
       }


}
void periodic()
  {   cleardevice();
     int p, q, p1, q1, p2, q2,q3, size=7;
     int a[30],b[30], x[118],y[118],s[22],d[80];
     int gdriver = DETECT , gmode;
     initgraph(&gdriver, &gmode, "");

   settextstyle(TRIPLEX_FONT, HORIZ_DIR, size);

   p = getmaxx() / 6;
   q = getmaxy() / 111;
   p1 = getmaxx()/ 7;
   q1 = getmaxy ()/ 7+2 ;
   p2 =( getmaxx()/2) + 230 ;
   q2 = (getmaxy() /7) +4 ;

   setbkcolor(BLACK);
   setcolor(9);
   setlinestyle(SOLID_LINE, 1,2);
   line(p1,q1,p2,q1);
   setcolor(11);
   setlinestyle(SOLID_LINE, 1,2);
   line(p1,q2,p2,q2);

   setcolor(WHITE);
  outtextxy(p, q ,"Periodic Table");
   setcolor(RED);
  a[1] = getmaxx() / 167;
  b[1] = getmaxy() / 4 ;
  a[2] = getmaxx() /19 ;
  b[2] = getmaxy() / 4 ;
  a[3] = getmaxx() / 190;
  b[4] = (getmaxy() / 2) + 101;
  a[5] = getmaxx() / 19;
  b[6] = (getmaxy() / 2) + 101;
  a[7] =  getmaxx() / 160;
  b[7] = (getmaxy() / 4)+30 ;
  a[8] =  (getmaxx() /9)-5 ;
  b[8] =  (getmaxy() / 4)+30 ;
  b[9] =  (getmaxy() / 4)+30 ;
  b[10] =  (getmaxy() / 2) + 101;
  b[11] =  (getmaxy() / 4)+61;
  b[13] = (getmaxy() / 2) - 27 ;
  b[15] = (getmaxy() / 2)+5 ;
  b[17] = (getmaxy() / 2)+38 ;
  b[19] = (getmaxy() / 2)+70 ;
  b[21] = (getmaxy() / 2)+102 ;

   line(a[3],b[2],a[3],b[4]);
   line(a[5],b[2],a[5],b[4]);
   line(a[8],b[9],a[8],b[10]);
   line(a[1],b[1],a[2],b[1]);
   line(a[1],b[7],a[8],b[7]);
   line(a[1],b[11],a[8],b[11]);
   line(a[1],b[13],a[8],b[13]);
   line(a[1],b[17],a[8],b[17]);
   line(a[1],b[15],a[8],b[15]);
   line(a[1],b[19],a[8],b[19]);
   line(a[1],b[21],a[8],b[21]);


    gotoxy(1,6);
    cout<<"<s-block>";
    gotoxy(3,7);
    cout<<"1";
    gotoxy(7,9);
    cout<<"2";
    gotoxy(3,9);
    cout<<"H";
    gotoxy(3,11);
    cout<<"Li";
    gotoxy(3,13);
    cout<<"Na";
    gotoxy(3,15);
    cout<<"K";
    gotoxy(3,17);
    cout<<"Rb";
    gotoxy(3,19);
    cout<<"Cs";
    gotoxy(3,21);
    cout<<"Fr";


    gotoxy(6,11);
    cout<<"Be";
    gotoxy(6,13);
    cout<<"Mg";
    gotoxy(6,15);
    cout<<"Ca";
    gotoxy(6,17);
    cout<<"Sr";
    gotoxy(6,19);
    cout<<"Ba";
    gotoxy(6,21);
    cout<<"Ra";




     setcolor(YELLOW);  //FOR D-BLOCK
  s[1] = (getmaxx() /9)-4 ;
  s[2] =  (getmaxx() /9)+354 ;
  s[3] =  (getmaxx() / 9) - 3  ;
  d[24] =  (getmaxy() / 2)+102 ;
  s[4] = (getmaxx() / 9)+30  ;
  s[5] = (getmaxx() / 9)+66  ;
  s[6] = (getmaxx() /9)+102 ;
  s[7] = (getmaxx() /9)+138 ;
  s[8] = (getmaxx() /9)+172 ;
  s[9] = (getmaxx() /9)+210 ;
  s[10] = (getmaxx() /9)+246 ;
  s[11] = (getmaxx() /9)+282 ;
  s[12] = (getmaxx() /9)+318 ;
  s[13] = (getmaxx() /9)+353 ;
  s[24] = getmaxx()/3;
  s[25] = (getmaxy()/3) + 20;
  gotoxy(10,12);
  cout<<"<-----------------d-block------------------>";
  gotoxy(11,13);
  cout<<"3";
  gotoxy(15,13);
  cout<<"4";
  gotoxy(20,13);
  cout<<"5";
  gotoxy(24,13);
  cout<<"6";
  gotoxy(29,13);
  cout<<"7";
  gotoxy(33,13);
  cout<<"8";
  gotoxy(38,13);
  cout<<"9";
  gotoxy(42,13);
  cout<<"10";
  gotoxy(47,13);
  cout<<"11";
  gotoxy(51,13);
  cout<<"12";

    gotoxy(11,15);
    cout<<"Sc";
    gotoxy(11,17);
    cout<<"Y";
    gotoxy(15,15);
    cout<<"Ti";
    gotoxy(15,17);
    cout<<"Zr";
    gotoxy(15,19);
    cout<<"Hf";
    gotoxy(15,21);
    cout<<"Rf";

    gotoxy(20,15);
    cout<<"V";
    gotoxy(20,17);
    cout<<"Nb";
    gotoxy(20,19);
    cout<<"Ta";
    gotoxy(20,21);
    cout<<"Db";

    gotoxy(24,15);
    cout<<"Cr";
    gotoxy(24,17);
    cout<<"Mo";
    gotoxy(24,19);
    cout<<"W";
    gotoxy(24,21);
    cout<<"Sg";

    gotoxy(28,15);
    cout<<"Mn";
    gotoxy(28,17);
    cout<<"Tc";
    gotoxy(28,19);
    cout<<"Re";
    gotoxy(28,21);
    cout<<"Bh";

    gotoxy(33,15);
    cout<<"Fe";
    gotoxy(33,17);
    cout<<"Ru";
    gotoxy(33,19);
    cout<<"Os";
    gotoxy(33,21);
    cout<<"Hs";

    gotoxy(37,15);
    cout<<"Co";
    gotoxy(37,17);
    cout<<"Rh";
    gotoxy(37,19);
    cout<<"Ir";
    gotoxy(37,21);
    cout<<"Mt";

    gotoxy(42,15);
    cout<<"Ni";
    gotoxy(42,17);
    cout<<"Pd";
    gotoxy(42,19);
    cout<<"Pt";
    gotoxy(42,21);
    cout<<"Ds";

    gotoxy(46,15);
    cout<<"Cu";
    gotoxy(46,17);
    cout<<"Ag";
    gotoxy(46,19);
    cout<<"Au";
    gotoxy(46,21);
    cout<<"Rg";

    gotoxy(51,15);
    cout<<"Zn";
    gotoxy(51,17);
    cout<<"Cd";
    gotoxy(51,19);
    cout<<"Hg";
    gotoxy(51,21);
    cout<<"Cn";








   line(s[13],b[13], s[13], d[24]);
   line(s[12],b[13], s[12], d[24]);
   line(s[11],b[13], s[11], d[24]);
   line(s[10],b[13], s[10], d[24]);
   line(s[9],b[13], s[9], d[24]);
   line(s[8],b[13], s[8], d[24]);
   line(s[7],b[13], s[7], d[24]);
   line(s[6],b[13], s[6], d[24]);
   line(s[5],b[13], s[5], d[24]);
   line(s[4],b[13], s[4], d[24]);
   line(s[3], b[13],s[3],d[24]);
   line(s[1], b[13], s[2], b[13]);
   line(s[1], b[15],s[2],b[15]);
   line(s[1],b[17] , s[2],b[17]);
   line(s[1],b[19] , s[2],b[19]);
   line(s[1],b[21] , s[2],b[21]);

    setcolor(GREEN);   //FOR P-BLOCK

  s[14] = (getmaxx() /9)+355 ;
  s[15] = (getmaxx() /9)+391 ;
  s[16] = (getmaxx() /9)+427 ;
  s[17] = (getmaxx() /9)+463 ;
  s[18] = (getmaxx() /9)+499 ;
  s[19] = (getmaxx() /9)+533 ;
  s[20] = getmaxx()  ;
  s[21] = (getmaxx() /9)+355 ;
  s[22] = (getmaxx()/2)+170;
  s[23] = getmaxy()/4;
  gotoxy(54,6);
  cout<<"<--------p-block---------->";
  gotoxy(55,9);
  cout<<"13";
  gotoxy(60,9);
  cout<<"14";
  gotoxy(65,9);
  cout<<"15";
  gotoxy(69,9);
  cout<<"16";
  gotoxy(73,9);
  cout<<"17";
  gotoxy(78,7);
  cout<<"18";

 x[15] =  getmaxx()/40+603;
    y[15] = (getmaxy() / 4) -10 ;
    gotoxy(78,9);
    cout<<"He";

    gotoxy(56,11);
    cout<<"Li";
    gotoxy(56,13);
    cout<<"Al";
    gotoxy(56,15);
    cout<<"Ga";
    gotoxy(56,17);
    cout<<"In";
    gotoxy(56,19);
    cout<<"Tl";
    gotoxy(55,21);
    cout<<"Uut";

    gotoxy(60,11);
    cout<<"C";
    gotoxy(60,13);
    cout<<"Si";
    gotoxy(60,15);
    cout<<"Ge";
    gotoxy(60,17);
    cout<<"Sn";
    gotoxy(60,19);
    cout<<"Pb";
    gotoxy(60,21);
    cout<<"Fl";

    gotoxy(65,11);
    cout<<"N";
    gotoxy(65,13);
    cout<<"P";
    gotoxy(65,15);
    cout<<"As";
    gotoxy(65,17);
    cout<<"Sb";
    gotoxy(65,19);
    cout<<"Bi";
    gotoxy(64,21);
    cout<<"Uup";

    gotoxy(69,11);
    cout<<"O";
    gotoxy(69,13);
    cout<<"S";//outtextxy(350,50,trial[i].name);
    gotoxy(69,15);
    cout<<"Se";
    gotoxy(69,17);
    cout<<"Te";
    gotoxy(69,19);
    cout<<"Po";
    gotoxy(69,21);
    cout<<"Lv";

    gotoxy(74,11);
    cout<<"F";
    gotoxy(74,13);
    cout<<"Cl";
    gotoxy(74,15);
    cout<<"Br";
    gotoxy(74,17);
    cout<<"I";
    gotoxy(74,19);
    cout<<"At";
    gotoxy(73,21);
    cout<<"Uus";

    gotoxy(78,11);
    cout<<"Ne";
    gotoxy(78,13);
    cout<<"Ar";
    gotoxy(78,15);
    cout<<"Kr";
    gotoxy(78,17);
    cout<<"Xe";
    gotoxy(78,19);
    cout<<"Rn";
    gotoxy(77,21);
    cout<<"Uuo";


  line(s[14], b[9],s[14],b[10]);
  line(s[15], b[9],s[15],b[10]);
  line(s[16], b[9],s[16],b[10]);
  line(s[17], b[9],s[17],b[10]);
  line(s[18], b[9],s[18],b[10]);
  line(s[19], b[2],s[19],b[4]);
  line(s[20], b[2],s[20],b[4]);
  line(s[19], b[1],s[20],b[1]);
  line(s[21], b[7],s[20],b[7]);
  line(s[21], b[11],s[20],b[11]);
  line(s[21], b[13],s[20],b[13]);
  line(s[21], b[15],s[20],b[15]);//outtextxy(350,50,trial[i].name);
  line(s[21], b[17],s[20],b[17]);
  line(s[21], b[19],s[20],b[19]);
  line(s[21], b[21],s[20],b[21]);

  setcolor(LIGHTMAGENTA);  //FOR F-BLOCK
  s[32] = (getmaxx()/2)- 60;
  gotoxy(8,23);
  cout<<"<--------------------------f-block--------------------------------->";

  s[26] =(getmaxx() /9)-18 ;
  s[27] = getmaxx()-46;
  s[28] = (getmaxx() /9)+18 ;
  s[29] = (getmaxx() /9)+54 ;
   int c=54,t=36;
  for(int i=30;i<=44;i++)
  {
   c=t+c;
  s[i] = (getmaxx() /9)+c;
  }
  d[1] = (getmaxy() / 2)+140 ;
  d[2] = (getmaxy() / 2)+204 ;
  d[3] = (getmaxy() / 2)+172 ;
  line(s[26], d[1], s[26], d[2]);
  line(s[26], d[1],s[27],d[1]);
   line(s[26],d[2],s[27],d[2]);
  line(s[26], d[3],s[27],d[3]);
   int j=1,k=2;
  for(int l=28;l<=42;l++)
  {
  line(s[l],d[j],s[l],d[k]);
 }

    gotoxy(9,25);
    cout<<"La";
    gotoxy(13,25);
    cout<<"Ce";
    gotoxy(18,25);
    cout<<"Pr";
    gotoxy(22,25);
    cout<<"Nd";
    gotoxy(27,25);
    cout<<"Pm";
    gotoxy(31,25);
    cout<<"Sm";
    gotoxy(36,25);
    cout<<"Eu";
    gotoxy(40,25);
    cout<<"Gd";
    gotoxy(45,25);
    cout<<"Tb";
    gotoxy(49,25);
    cout<<"Dy";
    gotoxy(54,25);
    cout<<"Ho";
    gotoxy(58,25);
    cout<<"Er";
    gotoxy(63,25);
    cout<<"Tm";
    gotoxy(67,25);
    cout<<"Yb";
    gotoxy(72,25);
    cout<<"Lu";
    actinoids();

 }
 void actinoids()
 {      setcolor(15);
	settextstyle(0,0,1);
	outtextxy(64,420,"Ac");
	outtextxy(100,420,"Th");
	outtextxy(136,420,"Pa");
	outtextxy(172,420,"U");
	outtextxy(208,420,"Np");
	outtextxy(244,420,"Pu");
	outtextxy(280,420,"Am");
	outtextxy(316,420,"Cm");
	outtextxy(352,420,"Bk");
	outtextxy(388,420,"Cf");
	outtextxy(424,420,"Es");
	outtextxy(460,420,"Fm");
	outtextxy(496,420,"Md");
	outtextxy(532,420,"No");
	outtextxy(568,420,"Lr");



	setcolor(15);
	outtextxy(250,460,"Enter Any Key Return.......");

	}

 void search()
{
	char ch;
	cleardevice();
	setbkcolor(0);
	setcolor(RED);
	settextstyle (6, HORIZ_DIR, 4);
	outtextxy (20, 22, "search");
	settextstyle (10,HORIZ_DIR, 5);
	setcolor(GREEN);
	outtextxy (54,1,"X");
	setcolor(WHITE);
	settextstyle(6,0,4);
	outtextxy(1,85," How do you want to Search? ");

	setfillstyle (SOLID_FILL, RED);
	bar (140, 150, 290, 200);
	setfillstyle (SOLID_FILL,LIGHTMAGENTA);
	bar (340, 150, 490, 200);
	setfillstyle (SOLID_FILL, BROWN);
	bar (140, 250, 290, 300);
	setfillstyle (SOLID_FILL,BLUE);
	bar (340, 250, 490, 300);
	settextstyle(6,0,1);

	outtextxy(150,165,"1.    NAME");

	outtextxy(350,165,"2.   SYMBOL");

	outtextxy(150,265,"3.  ATOMIC NO.");

	outtextxy(350,265,"4.     MENU");

	gotoxy(35,5);

	ch=(char)getch();
	if(ch>'0'&& ch<'4')
	    sname(ch);
	else  menu();


  }

 void sname(char ch)
      { cleardevice();
	int flag=0;
	char temp[20];
	char choice[20];
	setcolor(9);
	settextstyle (6, HORIZ_DIR, 4);
	outtextxy (20, 22, "search");
	settextstyle (10,HORIZ_DIR, 5);
	setcolor(GREEN);
	outtextxy (54,1,"X");
	setcolor(WHITE);
	settextstyle(0,0,1);
	outtextxy(1,100,"ENTER YOUR QUERY TO SEARCH => ");
	gotoxy(30,7);//should be less than (35,25) in any case
	gets(choice);
	for(int i=0;i<90;i++)
	 { if(ch=='1')
	     strcpy(temp,trial[i].name);
	   else if(ch=='2')
	     strcpy(temp,trial[i].sym);
	   else if(ch=='3')
	     strcpy(temp,trial[i].no);
	   else  break;
	 if(!strcmpi(choice,temp))
	   { show(i);
	     flag=1;
	     break;
	   }
	 }
	if(flag==0)
	  {
	   settextstyle(3,0,2);
	   setcolor(12);
	   outtextxy(150,125,"!!!NO RESULT FOUND!!!");
	   delay(1000);
	   search();
	   getch();
	   }

	}

  void show(int i)
  {
   settextstyle(6, HORIZ_DIR,1);
	outtextxy(280,430,"Searching...");
	setcolor(9);
	for(int k=0;k<=650 /*for completing the bar*/; k++)  //for loader.
	{
		line(k,520,k,460);
		delay(2);
	}
    cleardevice();
    setcolor(3);
    settextstyle(0,0,1);
   outtextxy(100,50,"NAME                 : ");
   setcolor(WHITE);
   outtextxy(350,50,trial[i].name);
   setcolor(4);
   outtextxy(100,100, "SYMBOL               : ");
    setcolor(WHITE);
   outtextxy(350, 100, trial[i].sym);
   setcolor(5);
   outtextxy(100, 150, "ATOMIC NO.           : ");
    setcolor(WHITE);
   outtextxy(350, 150, trial[i].no);
   setcolor(6);
   outtextxy(100,200, "ATOMIC MASS(u)       : ");
    setcolor(WHITE);
   outtextxy(350,200,trial[i].mass);
    setcolor(9);

   outtextxy(100,250, "ATOMIC RADIUS(A)     : ");
    setcolor(WHITE);
    outtextxy(350,250,trial[i].radii);

   setcolor(MAGENTA);
   outtextxy(100,300,"FIRST I.E(eV)        : ");
    setcolor(WHITE);
   outtextxy(350,300,trial[i].ie1);
   setcolor(YELLOW);
   outtextxy(100,350,"DENSITY              : ");
    setcolor(WHITE);
   outtextxy(350,350,trial[i].density);
   setcolor(13);
   outtextxy(100,400,"ELECTRONEGATIVITY    : ");
   outtextxy(100,425,"(Pauling scale)");
    setcolor(WHITE);
   outtextxy(350,400,trial[i].elecneg);
   getch();
   search();

   }
   int mainmenu()
     {
	cleardevice();
	int a;
	setbkcolor (BROWN);
	setcolor(WHITE);
	settextstyle (6, HORIZ_DIR, 6);
	outtextxy (20, 22, "element");
	settextstyle (10,HORIZ_DIR, 7);
	setcolor(YELLOW);
	outtextxy (80, 0, "X");
	setcolor(WHITE);
	setfillstyle (SOLID_FILL, LIGHTBLUE);//BOX 1
	 bar (50, 300, 180, 200);
	setfillstyle (SOLID_FILL, GREEN);//BOX 2
	 bar (255, 300, 385, 200);
	 setfillstyle (SOLID_FILL, RED);//BOX 3
	 bar (460, 300, 590,200);

	settextstyle (9, HORIZ_DIR, 5);
	outtextxy (95, 200, "1");//1
	outtextxy (300, 200, "2");//2
	outtextxy (510, 200, "3"); //3

	//all texts..
	setcolor(WHITE);
	settextstyle (6, HORIZ_DIR, 1);
	outtextxy (60, 295, "    Enter the");//1
	outtextxy (60, 312, "Knowledge Portal");

	outtextxy (288, 295, "About Us");//2

	outtextxy (510, 295, "Exit"); //3

       char choice[3];
       char numb;
       settextstyle(6,0,3);
       outtextxy(230,380,"Enter Your Choice! ");
       numb=(char)getch();
       sprintf( choice,"%c", numb );
       outtextxy( 430, 380, choice );
       cleardevice();
       settextstyle (2, HORIZ_DIR, 5);
       switch(numb)
       {
       case '1' :smile();
		 menu();
		 getch();
		 cleardevice();
		 return(mainmenu());
	case '2':clrscr();
		 cleardevice();
		 cout<<"\n \n \n \t \t\t This Program is Developed by:"
		     <<"\n \n \n \t \t\t \t1. Niraj Prasad."
		     <<"\n\t \t\t \t2. Kunal Singh."
		     <<"\n\t \t\t \t3. Vivek Prakash."
		     <<"\n\t \t\t \t4. Subhadeep Dey."
		     <<"\n\n\t\t\t\t      for \n\t\t\tCBSE COMPUTER SCIENCE PROJECT\n\t\t\t\tAISSCE 2014";

		 getch();
		 cleardevice();
		 return(mainmenu());
	case '3': settextstyle (6, HORIZ_DIR, 3);
		  outtextxy(150,200,"Thank You For Using Element X.....! ");
		  delay(3000);
		  exit(0);
	default:return(mainmenu());
       }
}
