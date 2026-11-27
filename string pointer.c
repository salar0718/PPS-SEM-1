#include<stdio.h>
int main()
{
char str[20]="Greeks";
//pointer variable which stores
//the character array str
char* ptr=str;
//while loop will run till
//the character value is not
//equal no null character
while (*ptr !='\0')
{
printf("%c",*ptr);
ptr++;
}
return 0;
}
