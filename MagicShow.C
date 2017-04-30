#include<stdio.h>
#include<conio.h>
#include<math.h>


void seperate(int a[],int b[],int c[],int p)
{

int i,j,k;
i=0;
//printf("a[%d]=%d \n",i,a[i]);
for(i=0,j=0,k=0;i<p;i++)
 {
// printf("1st value of i %d ",i);
// printf("a[%d]=%d ",j,a[j]);
//printf("b[%d]=%d ",i,b[i]);
 b[i]=a[j];
// printf("\nb[%d]=%d ",i,b[i]);
 i++;j++;

// b[i]=a[j];
// i++;j++;
 c[k]=a[j];
 k++;j++;
	    // b[i]=a[j];
	   // i++;j++;
 c[k]=a[j];
 k++;j++;
  b[i]=a[j];
  i++;j++;
 b[i]=a[j];   //extra
 i++;j++;     //extra
 c[k]=a[j];
 k++;j++;
 b[i]=a[j];
 j++;
 c[k]=a[j];
  k++;j++;
//  printf(" b[%d]=%d ",i,b[i]);
  }
//printf(" val i= %d  ",i);

// printf("a[%d]=%d ",i,a[i]);
//b[0]=a[0];
//printf(" b[value of 0]=%d\n",b[0]);
//for(i=1;i<p;i++)
//printf("    b[value i %d]=%d   ",i,b[i]);
// printf("c[%d]=%d ",i,c[i]);
 }

 int display(int b[],int p,int d[],int n,int e[])
 {
 int m,t,j,i;
 t=(   (64/pow(2,n-1))*pow(2,n-2));
printf("\n value of UPPER LIMIT is %d \n",t);//if it is 32 then prog will execute
 for(j=0;j<p;j++)
 {e[j]=b[j];
// printf("e=%d ",e[j]);
 }
 for(j=p;j<t;j++)
 {
  e[j]=d[j-p];
  // printf("d+%d ",e[j]);
  }
  for(i=31;i>=0;i--)
  { for(j=0;j<=i;j++)
   {int t=0;
    if(e[j]>e[j+1])
    {t=e[j];
    e[j]=e[j+1];
    e[j+1]=t;
    }
   }
  }
  printf("\nlist is:\n");
 for(i=0;i<32;i++)
 printf("%d   ",e[i]);

 printf("\n\ncontinue only if UPPER LIMIT is 32");
 printf("\n\ndoes the list contains ur no.\n");
 printf("\nif yes then press 1 else 2");
 scanf("%d",&m);
 clrscr();
 return m;

 }

 void check(int a[],int b[],int c[],int p,int m,int n,int d[])
 {
 int i,j;
  if(m==1)

  {
  for(i=0;i<p;i++)
 {//printf("b=%d",b[i]); verification of values assigned to b
  a[i]=b[i];
  // printf("a=%d ",a[i]);
   }

  if(n==2)
  for(i=0;i<32;i++)
 {
 d[i]=c[i];

  }

}

else
{ for(i=0;i<p;i++)
 // {printf("c=%d ",c[i]);      same
  a[i]=c[i];
  // printf("a=%d ",a[i]); for verifying the value assigned to c
  // }
  if(n==2)
  for(i=0;i<32;i++)
 { d[i]=b[i];
  // printf(" d %d ",d[i]);
 }
 }}

  void main()
  {
  int p,a[63],r,m,n,o,b[32],c[33],d[32],e[32],v;
  n=1;

  clrscr();
 for(o=0;o<65;o++)
  {a[o]=o+1;
   //printf("%d ",a[o]);
  }
   printf("\n\t\t\tWELCOME TO THE MAGIC SHOW !!!\n");
   printf("\nFORMAT:\nselect a number from the list,and at the end I will display the number u have selected\n");
   printf("READY!!!  Lets start......\n");
 for(o=0;o<60;o++)
 printf("%d   ",a[o]);



  printf("\npress 1 if chosen ");
  scanf("%d",&v);
  clrscr();
 while(n!=7)
  {p=(64/pow(2,n));
  // printf(" p=%d",p);
  // printf(" \n a[0]=%d \n",a[0]);
  seperate(a,b,c,p);
  n++;
 // printf("%d",n);
   m=display(b,p,d,n,e);
   check(a,b,c,p,m,n,d);
 }


    printf("\n\n\n\n\n\t\t\t\AND UR CHOSEN NO. IS %d",a[0]);
  getch();
}


