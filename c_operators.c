#include<stdio.h>
struct Point 
{ 
   int x;
   int y;
   int z; 
}; 
  
int main()
{
	//struct Point p1 = {.y = 0, .z = 1, .x = 2}; 
   struct Point p2;// = {.x = 20}; 
  
   //printf ("x = %d, y = %d, z = %d\n", p1.x, p1.y, p1.z); 
   printf("%d%d%d",p2.x,p2.y,p2.z); 
	/*struct t t1;
	printf("%d",sizeof(int));
	
	int i=10,j=11;
	int k=i++ + ++j;
	printf("%d %d",i,k);
	*/
	return 0;
}
