#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
int a[100], n,x,it=0, i, j, position, swap;
scanf("%d %d", &n,&x);
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
for(i = 0; i < n - 1; i++)
{
position=i;
for(j = i + 1; j < n; j++)
{
if(a[position] > a[j])
position=j;
it++;
if(x==it){
    break;
}
}
if(position != i)
{
swap=a[i];
a[i]=a[position];
a[position]=swap;
}
    if(x==it){
    break;
}
}
for(i = 0; i < n; i++)
printf("%d ", a[i]);
return 0;
}

