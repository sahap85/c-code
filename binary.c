#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main()

{

   int c, first,quaries, last, middle, n, search, array[100];

   scanf("%d",&n);

   for (c = 0; c < n; c++)

      scanf("%d",&array[c]);

   scanf("%d",&quaries);

    for(int i=0;i<quaries;i++){

   scanf("%d", &search);

   first = 0;

   last = n - 1;

   middle = (first+last)/2;

   while (first <= last) {

      if (array[middle] < search)

         first = middle + 1;    

      else if (array[middle] == search) {

         printf("%d\n",middle+1);

         break;

      }

      else

         last = middle - 1;

      middle = (first + last)/2;

   }

   if (first > last)

      printf("%d\n", -1);}

 

   return 0;  

}
