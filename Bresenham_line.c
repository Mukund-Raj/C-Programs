#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"graphics.h"

  main()
  {
  	int gd=DETECT,gm;
  	initgraph(&gd,&gm,"");
  	float x1,x2,y1,y2,dx,dy,temp,p;
  	float x,y,xend,yend;
  	
  	printf("Enter 1st end point");
  	scanf("%f%f",&x1,&y1);
  	
  	printf("Enter 2nd end point");
  	scanf("%f%f",&x2,&y2);
  	
  	dx=abs(x2-x1);
  	dy=abs(y2-y1);
  	
  	if(dy>dx)
  	{   temp=dy;
  	    dy=dx;
  	    dx=temp;
  	    
	  }
  	
  	p=2*dy-dx;
  	if(x1<x2)
  	{ x=x1;
  	   y=y1;
  	   xend=x2;
  	   
	  }
	  else
	  { 
	    x=x2;
	    y=y1;
	    xend=x1;
	  }
	  
	  while(x<xend)
	  {
	  	
	  	if(p<0)
	  	{ p=p+2*dy;
	  	  x++;
		  }
		  else
		  {   
		    p=p+2*dy-2*dx;
		    x++;
			y++;
		  
		  }
		  putpixel(ceil(x),ceil(y),1);
	  }
	      
	       
	       getch();
	       closegraph();
  }
