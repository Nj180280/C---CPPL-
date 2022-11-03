#include<stdio.h>
void callbyval(int a,int b)
{
    printf("values of passed parametres in callbyval are:\n"); 
    printf("%d and %d\n",a,b); 
    int c=a+b; 
    int d=a-b; 
    printf("value of parametres after operating in callbyval:\n"); 
    printf("%d and %d\n",c,d);
}
void m2(int *m,int *n)
{
    printf("values of passed parametres in callbyref are:\n"); 
    printf("%d and %d\n",*m,*n);  
    printf("value of parametres after operating in callbyref :\n"); 
    printf("%d and %d\n",*m=*m+4,*n=*n-3);
}
void main()
{
    int m=5; 
    int n=6;
    printf("orignal values of m and n:\n"); 
    printf("m=%d\n n=%d\n",m,n); 
    callbyval(m,n); 
    printf("values of m and n after call by value:\n"); 
    printf("m=%d\n n=%d\n",m,n); 
    m=5;
    n=6;
    m2(&m,&n); 
    printf("values of m and n after call by reference:\n"); 
    printf("m=%d\n n=%d\n",m,n); 
}