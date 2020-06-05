#include<stdio.h>
#include<conio.h>
#include<graphics.h>
 void main()
 { float x,y,dx,dy,x1,y1,x2,y2,xend,temp,p;
   scanf("%f%f",&x1,&y1);
   scanf("%f%f",&x2,&y2);
   dx=abs(x2-x1);
   dy=(y2-y1); 
   if(dy>dx)
   { temp=dy;
     dy=dx;
     dx=temp;
   }
   p=(2*dy)-dx;
   if(x1<x2)
   { x=x1;
      y=y1;
     xend=x2;
   }
   
   
 }
