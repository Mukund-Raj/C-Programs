#include<stdio.h>
#include<stdlib.h>
void reverse(int,int);

  int main()
  { int num;
    printf("enetr a num");
    scanf("%d",&num);
    reverse(num,0);
    return 0;
  }
  void reverse(int temp,int r)
  { int rem;
    if(temp!=0)
    { rem=temp%10;
      r=rem+r*10;
      temp=temp/10;
      reverse(temp,r);
	}
	printf("\nthe reverse is %d",r);
	exit(0);
  }
