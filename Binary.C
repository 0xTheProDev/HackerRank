#include <stdio.h>

int main(void)
{
  int result, mask = 1, counter, a[20], c = 0, value = 0;
  while(c < 20)
  {
    a[c] = value++;
    c++;
  }
  c = 0;
  while(c < 20)
  {
    counter = 31;
    while(counter >= 0)
    {
      result = ((mask << counter) & a[c]) >> counter;
      printf("%i", result);
      counter--;
    }
    printf("\n");
    c++;
  }
  return 0;
}
