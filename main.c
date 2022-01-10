#include <stdio.h>
#include <stdlib.h>

void prime(int num);

int pnc=0,primenum[100],count=0;

int main(int argc,char*argv[]) {
  
  int *a;
  int n=0,N;
  //int num[100];
  int big,small;

  N = argc-1;
  a = (int*)malloc(sizeof(int)*N);
  printf("HELLO WORLD");

  for(int i=1;i<argc;i++)
  {
    a[i-1] = atoi(argv[i]);
    n++;    
    //num[i-1]=a[i-1];
    prime(a[i-1]);
  }
  /*printf("===\n");
  for(int i=1;i<argc;i++)
  {
    printf("%d\n",primenum[i-1]);
  }
  printf("===\n");*/
  if(count>0)
  {
  //find small
  small=primenum[0];
  for(int i=0; i<n; i++)
   {
     if(primenum[i]==0)
     {
       break;
     }
     if(primenum[i]<small)
       small = primenum[i];
   }
  printf("The smallest prime is %d\n",small);

 //find big
  big=primenum[0];
  for(int i=0; i<n; i++)
   {
     if(primenum[i]==0)
     {
       break;
     }
     if(primenum[i]>big)
       big = primenum[i];
   }
  printf("The biggest prime is %d\n",big);
  }
  else
  {
    printf("Primenumber not here!\n");
  }
  return 0;
}
 
void prime(int x)
{
   int i;
   for(i=2;i<x;i++)
   {
     if(x%i==0)
     {
       break;
     }
   }
     if(i==x)
     { 
       primenum[pnc]=x;
       pnc++;
       count++;
     }
}