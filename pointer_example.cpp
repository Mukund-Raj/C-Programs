#include<iostream>
using namespace std;
/*
int main()
{
	char *ptr = "GeeksQuiz";
 printf("%s\n", *&*&ptr);
	
	/*
	int a; 
   char *x; 
   x = (char *) &a; 
   a = 512; 
   x[0] = 1; 
   x[1] = 2; 
   cout<<a<<endl;
   //cout<<sizeof(int);
	cout<<sizeof(x);*/
	/*
	float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
 
    printf("%f ", *ptr2);
    printf("%d", ptr2 - ptr1);
	
	int p[]={1,2,3};
	float q=89;
	int k=5;
	int *ptr1=&k; 
	char c='a';
	char *ch=&c;
	float *ptr=&q;
	cout<<sizeof(ptr);
	cout<<endl<<sizeof(ptr1);
	cout<<endl<<sizeof(&ch);*/
	/*
	for(int i=0;i<3;i++)
	{
		cout<<*(ptr+i)<<endl;
	}
	
	//cout<<ptr<<endl;
	//cout<<&k<<endl;
	//*ptr=10;
	//cout<<*ptr<<endl<<k;
	return 0;
}*/
void fun(int *arr)
{
  int i;
  int arr_size = sizeof(arr)/sizeof(arr[0]);
  for (i = 0; i < arr_size; i++)
      printf("%d ", arr[i]);
}
 
int main()
{
  int i;
  int arr[4] = {10, 20 ,30, 40};
  cout<<sizeof(arr)<<endl;
  fun(arr);
  return 0;
} 
