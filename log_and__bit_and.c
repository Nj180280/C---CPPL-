#include<stdio.h>
#include<stdbool.h>
void same()
{
    int a=3; //here a,b,c,d all have same datatype i.e. integer ..0011
    int b=7;//..0111
    bool c=a&b; //bitwise and operation
    bool d=a&&b; //logical and operation
    if(c==true)
    {
        printf("%d&%d is true\n",a,b); //taking a=3 and b=7 results both and operations as true
    }
    if(c==false)
    {
        printf("%d&%d is false\n",a,b);
    } 
    if(d==true)
    {
        printf("%d&&%d is true\n",a,b); 
    }
    if(d==false)
    {
        printf("%d&&%d is false\n",a,b); 
    }
}
void meth()
{
    double a=0.8; //bitwise and operation cannot be performed on string or floating point numbers , it can only be performed on integers
    double b=0.7; //logical and operation can be performed on integer as well as floating point number
    bool d=a&&b; 
    if(d==true) //logical and operation on a=0.8 and b=0.7 gives true here 
    {
        printf("%lff&&%lf is true\n",a,b); 
    }
    if(d==false)
    {
        printf("%lf&&%lf is false\n",a,b); 
    }
}
void main()
{
    same(); 
    meth();
}