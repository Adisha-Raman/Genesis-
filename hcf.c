#include <stdio.h>

int main()
{
 int n1,n2;
 int hcf=0,max=0,min=0;

 printf("Enter two +Ve nos");
 scanf("%d %d",&n1,&n2);
 
if(n1>n2)
{
    max=n1;
    min=n2;
}
else if(n2>n1)
{
    max=n2;
    min=n1;
}
else
max=min=n1;

 for(int i=1;i<=max;i++)
 {
     if(i<=min)
     {
         if( (n1%i==0) && (n2%i==0))
         hcf=i;
     }
     else
     break;
 }
 printf("\n hcf is %d",hcf);

    return 0;
}
