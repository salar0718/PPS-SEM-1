#include<stdio.h>
int main()
{
long long n,orignal,bin=0;
long long rem,i=1;
printf("Enter a decimal number:");
scanf("%||d",&n);
orignal=n;
while(n!=0)
{
rem=n%2;
n=n/2;
bin=bin+(rem*i);
i=i*10;
}
printf("||d in decimal=%||d in binary",orignal,bin);
return 0;
}
