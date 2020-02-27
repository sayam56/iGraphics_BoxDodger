/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
# include "iGraphics.h"
# include<math.h>
double x=30;
double y=50;
double l1=768;
double l2=768;
double l3=768;
double l4=768;
double l5=768;
double l6=768;
double l7=768;
double l8=768;
double b1,b3,b4,b5,b6,b7,b8;
double b2;
double dy;
double dy2,dy3,dy4,dy5,dy6,dy7,dy8;
double x1=38;
double x2=38;
double x3=38;
double x4=38;
double x5=38;
double x6=38;
double x7=38;
double x8=38;
int score=0;
int showscore=0;
char sshowscore[10];
char sscore[10];
int t,t1,c;
int game_over_bmp=0;
int play_clicked=0;




void randombox()
{
	b1=rand()%(600-4);
	b2=rand()%(600-24);
	b3=rand()%(600-34);
	b4=rand()%(600-44);
	b5=rand()%(600-54);
	b6=rand()%(600-194);
	b7=rand()%(600-104);
	b8=rand()%(600-94);
	dy=50+rand()%(100-50);
	dy2=50+rand()%(100-50);
	dy3=50+rand()%(100-50);
	dy4=50+rand()%(100-50);

	dy5=50+rand()%(100-50);
	dy6= 50+rand()%(100-50);
	dy7= 50+rand()%(100-50);
	dy8= 50+rand()%(100-50);


}
void random_box_animate()
{
	

	randombox();
    iPauseTimer(t);
	iResumeTimer(t1);
	
	

	
}
void collision()
{
	if((x+10)>=l1&&(x-10)<=(l1+38))
	{
        if((y+10)>=b1&&(y-10)<=(b1+dy))
		{
			game_over_bmp=1;
		}
	}
	 else if((x+10)>=l2&&(x-10)<=(l1+38))
	{
        if((y+10)>=b2&&(y-10)<=(b2+dy2))
		{
			game_over_bmp=1;
		}
	}
	 else if((x+10)>=l3&&(x-10)<=(l3+38))
	{
        if((y+10)>=b3&&(y-10)<=(b3+dy3))
		{
			game_over_bmp=1;
		}
	}
	  else if((x+10)>=l4&&(x-10)<=(l4+38))
	{
        if((y+10)>=b4&&(y-10)<=(b4+dy4))
		{
			game_over_bmp=1;
		
		}
	}
	  else if((x+10)>=l5&&(x-10)<=(l5+38))
	{
        if((y+10)>=b5&&(y-10)<=(b5+dy5))
		{
		game_over_bmp=1;
		}
	}
	   else if((x+10)>=l6&&(x-10)<=(l6+38))
	{
        if((y+10)>=b6&&(y-10)<=(b6+dy6))
		{
			game_over_bmp=1;
		}
	}
	   else if((x+10)>=l7&&(x-10)<=(l7+38))
	{
        if((y+10)>=b7&&(y-10)<=(b7+dy7))
		{
			game_over_bmp=1;
		}
	}
	    else if((x+10)>=l8&&(x-10)<=(l8+38))
	{
        if((y+10)>=b8&&(y-10)<=(b8+dy8))
		{
			game_over_bmp=1;
		}
	}
	
}


void random_box_len()
{
	
	if(l1<=-40&&l2<=-40&&l3<=-40&&l4<=-40&&l5<=-40&&l6<=-40&&l7<=-40&&l8<=-40)
	{
		 l1=950;
         l2=920;
		l3=880;
		l4=830;
		l5=980;
		l6=1010;
		l7=1150;
			l8=890;
			randombox();
			
			
			
	}
	collision();
	if(game_over_bmp==0)
	{
		score++;
	}
	if(score%1000==0)
	{
		showscore++;
	}
	

	if(score<2000)
	{l1=l1-4;
	l2=l2-4;
	l3=l3-4;
	l4=l4-4;
	l5=l5-4;
	l6=l6-4;
	l7=l7-8;
	l8=l8-5;
	}
	else if(score>=2000&&score<7500)
	{l1=l1-6;
	l2=l2-6;
	l3=l3-6;
	l4=l4-6;
	l5=l5-6;
	l6=l6-6;
	l7=l7-12;
	l8=l8-8;
	}
	else if(score>=7500)
	{l1=l1-9;
	l2=l2-9;
	l3=l3-9;
	l4=l4-9;
	l5=l5-9;
	l6=l6-9;
	l7=l7-14;
	l8=l8-11;
	}
	
	
	
}

void ani()
{
	
	int i,j;
	if(y<476)
	{
		for(i=0;i<30;i++)
	{
      y=y+0.25;
	}
	}
	
	
	
	
	
	
	
	else if (y>=476) 
	{
		y=y;
		
		
	}
}
void anid()
{

	int i,j;
	if(y>25)
	{
	for(i=0;i<30;i++)
	{
		y=y-0.25;
	}
	
	
	
	}
	
	else if (y<=25) 
	{
		y=y;
		
		
	}
	
	
		
}



/* 
	function iDraw() is called again and again by the system.
*/
void iDraw()
{
	
	//place your drawing codes here	
	if(play_clicked=0)
	{
		iClear();
		iShowBMP(0,0,"backf.bmp");
	}
	if(play_clicked=1)
	{
	iClear();
	iShowBMP(0,0,"back.bmp");
	
	
	iSetColor(12,78,99);
	iFilledCircle(x,y,10);
	iSetColor(244, 66, 66);
	iFilledRectangle(l1,b1,x1,dy);
	iSetColor(241, 244, 65);
	iFilledRectangle(l2,b2,x2,dy2);
	iSetColor(70, 244, 65);
	iFilledRectangle(l3,b3,x3,dy3);
	iSetColor(65, 244, 235);
	iFilledRectangle(l4,b4,x4,dy4);
	iSetColor(23, 20, 206);
	iFilledRectangle(l5,b5,x5,dy5);
	iSetColor(206, 19, 206);
	iFilledRectangle(l6,b6,x6,dy6);
	iSetColor(104, 69, 94);
	iFilledRectangle(l7,b7,x7,dy7);
	iSetColor(219, 155, 201);
	iFilledRectangle(l8,b8,x8,dy8);

	if(game_over_bmp==1)
	{
		iShowBMP(0,0,"gameover.bmp");
		
		
		
	}
	iText(650,400,"Score:" );
	_itoa_s(score,sscore,10);
	iText(725,400,sscore);
	}
	
	
	
	
	
	
	
	


}


/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		(button==GLUT_LEFT_BUTTON && state== GLUT_DOWN);
		ani();
		//place your codes here	
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	if(key == 'r')
	{
		play_clicked=1;
	}
	
		
		
		
		
		

		//do something with 'q'

	if(key=='s')
	{
		
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
	if(key == GLUT_KEY_UP)
	{
			ani();
			
	}
	if(key == GLUT_KEY_DOWN)
	{
		anid();
		
	}
	//place your codes for other keys here
}



int main()
{
	
	
	
	
	//place your own initialization codes here.
	t=iSetTimer(3,random_box_animate);
	

	t1=iSetTimer(5,random_box_len);
	
	
	
	
	
    
	iInitialize(768, 480, "Box Hopper-Muhibul");
	
	return 0;
}	