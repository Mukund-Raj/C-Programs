#include<stdio.h>
int a[20];
void sel(int a[],int n);
void msort(int low,int high);
void merge(int low,int mid,int high);

     int main()
  { int n,i;
    printf("how many elements you want");
	 scanf("%d",&n);
	 printf("\n enter elements:");
	 for(i=0;i<n;i++) 
	 scanf("%d",&a[i]);
	 printf("\n unsorted list is:\n");
	 for(i=0;i<n;i++) printf("%d \t",a[i]);
	 msort(0,n-1);
	  // sel(a,n);
	 printf("\n sorted list is\n");
	 for(i=0;i<n;i++) printf("%d \t",a[i]);
      return 0;
  }
     
       void msort(int low,int high)
       { int mid;
        if(low!=high)
        { 
           mid=(low+high)/2;
           msort(low,mid);
           msort(mid+1,high);
           merge(low,mid,high);
		}
       	 
	   }
	   
	   void merge(int low,int mid,int high)
	   {  
	   int b[50],i;
	     int l=low;
	     int h=mid+1;
	     int k=low;
	   
	     while((l<=mid) && (h<=high))
	     { if(a[l]<=a[h])
	        { b[k]=a[l];
	          l++;
			}
			else
			{ b[k]=a[h];
		       h++;
			}
			k++;
			
		 }
          if(l<=mid)
          { for(i=l;i<=mid;i++)
            { b[k]=a[i];
              k++;
			}
		  }
		  else
		  { for(i=h;i<=high;i++)
		    {   b[k]=a[i];
		         k++;
			}
		  }
		
	     for(i=low;i<=high;i++)
		   a[i]=b[i];
		     	   	 
	   }
	   
	  /* void sel(int a[],int n)
	   { int i,j,small,d;
	     for(i=0;i<=n-2;i++)
	     {  small=i;
	        for(j=i+1;j<=n-1;j++)
	        {if(a[j]<a[small])
	          small=j;
			}
			d=a[small];
			a[small]=a[i];
			a[i]=d;
		 }
		 
	   }
	   */
