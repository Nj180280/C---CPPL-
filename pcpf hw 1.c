#include <stdio.h> 
#include <math.h>
struct Joshi
{
    char name[9];
    int rollno;
};
void main()
{
struct Joshi m[2];
m[0].name[0]='N';
m[0].name[1]='i';
m[0].name[2]='r';
m[0].name[3]='a';
m[0].name[4]='n';
m[0].name[5]='j';
m[0].name[6]='a'; 
m[0].name[7]='n'; 
m[0].name[8]='\0'; 
m[0].rollno=47;
printf("Name is: %s\n",m[0].name);
printf("Roll no is: %d\n",m[0].rollno);
printf("Address of first element is: %p\nAddress of second element is: %p\n",&m[0],&m[1]);
printf("size of structure is %d\n",sizeof(m));
}