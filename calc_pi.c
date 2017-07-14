#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  int n = 0;
  int result = 0;
  float pi = 0;

  switch (argc)
  {
    case 1:
      n = 1000;
      break;
    case 2:
      n = atoi(argv[1]);
      break;
    default:
      result = -1;
      break;
  }

  if (result == 0)
  {
    int i = 0;

    while (i < n)
    {
      float iFloat = (float) i;

      pi += ((float) (1 - (2 * (i % 2)))) * (4.0f / ((float) ((i * 2) + 1)));
      ++i;
    }

    printf("%f\n", pi);
  }

  return result;
}
