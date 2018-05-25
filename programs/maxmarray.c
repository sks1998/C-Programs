#include <stdio.h>

int main()
{
  int array[100], maximum, n, c, location = 1;

  printf("Enter the number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  maximum = array[0];

  for (c = 1; c < n; c++)
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
       location = c+1;
    }
  }

  printf("Maximum element is present at location %d and it's value is %d.\n", location, maximum);
  return 0;
}
