#include<stdio.h>
int a=5; 
char b='c';  //a,b,c are global variables 
float d= 3.56; 
void sc()
{
    int e=6; 
    char f='d'; //e,f,g will have scope limited to sc function 
    float g=4.98; 
    printf("scope in sc function : \n"); 
    printf("e=%d\n",e); 
    printf("f=%c\n",f); 
    printf("g=%d\n",g); 
}
void main()
{
    sc(); 
    float a=4.6; //global and local variable with same name in main 
    double b=4.77; 
    float d=4.2; 
    int h=6; //local to main 
    for(int i=0;i<2;i++)
    {
        float j = 2.1; 
        printf("%d\t",j); // j is local to the for loop and has limited scope 
    }
    printf("global and local variable with same name inside block:\n"); 
    for(int i=0;i<2;i++)
    {
        char a = 'a'; 
        printf("%c\t",a); //here a is having same name as global variable but is local to the block , different datatype 
    }
    printf("global and local variable with same name but different datatype outside block"); 
    printf("a=%f\n",a); 
    printf("local:%f\n",d); 
    printf("%d\n",d); //both will print d from local main 
}