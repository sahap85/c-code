#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main()

{

   int c, first, last, middle, n, search, array[100];

   scanf("%d %d",&n,&search);

   for (c = 0; c < n; c++)

      scanf("%d",&array[c]);

   for (c = n-1; c >=0; c--)

  {

    if (array[c] == search)

    {

      printf("%d", c+1);

      break;

    }

  }

  if (c == n)

    printf("%d",-1);

  return 0;

}
