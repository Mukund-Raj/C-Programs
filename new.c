#include<stdio.h>
#include<math.h>
int main()
 {   int i=-3,j=2,k=0,m;
      m=++j && ++i || ++k;
      printf("%d %d %d %d",i,j,k,m);
 
 	return(1);
 	
 }
