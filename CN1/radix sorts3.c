#include <stdio.h>
#define g_MAX 200
void radixSort(float *a,int n)
{
	int i,d=1;
    float max=a[0],min=a[0],b[10],t[100];
	for (i=1;i<n;i++)
		{ if (a[i]<min) min=a[i];
		  if (a[i]>max) max=a[i]; }
	for (i=0;i<n;i++) a[i]=a[i]-min+1;
	while (max/d>0)
	{
		for (i=0;i<10;i++) b[i]=0;
		for (i=0;i<n;i++) b[a[i] /d %10]++;
		for (i=1;i<10;i++) b[i]+=b[i-1]; 
		for (i=n-1;i>=0;i--) t[--b[a[i]/d%10]]=a[i];
		for (i=0;i<n;i++) a[i]=t[i];
		d*=10;   
	}
	for (i=0;i<n;i++) a[i]=a[i]+min-1;
}
int main()
{
    int i,n;
    float a[g_MAX];
	printf("enter n:");scanf("%d",&n);
	for (i=0;i<n;i++)
     {
        do
        {
         printf("\nEnter value a[%d]",i);
         scanf("%f",&a[i]);
        } while (a[i]!=(int)a[i]);
     }
	radixSort(a,n);
	printf("An array after sorting: \n");
	for (i=0;i<n;i++) printf("%.0f  ",a[i]);
    getchar();
    getchar();
    return 0;
}