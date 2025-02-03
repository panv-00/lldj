#include "lldj.h"

void generate_distinct_random_numbers(int lower, int upper, int n)
{
  int *numbers = malloc(n * sizeof(int));

  if (!numbers)
  {
    printf("Memory allocation failed.\n");
    return;
  }

  int count = 0;

  while (count < n)
  {
    int num   = (rand() % (upper - lower + 1)) + lower;
    int found = 0;

    for (int i = 0; i < count; i++)
    {
      if (numbers[i] == num)
      {
        found = 1;
        break;
      }
    }

    if (!found)
    {
      numbers[count] = num;
      count++;
    }
  }

  printf("Selecting %d distinct random numbers between %d and %d:\n", n, lower,
         upper);

  for (int i = 0; i < n; i++)
  {
    printf("%d   ", numbers[i]);
  }

  printf("\n");

  free(numbers);
}

int main(int argc, char *argv[])
{
  int lower, upper, num_guesses;

  if (argc == 1)
  {
    lower       = LOWER;
    upper       = UPPER;
    num_guesses = PICKS;
  }

  else if (argc != 4)
  {
    printf("Usage: %s -> distinct %d numbers between %d and %d\n", argv[0],
           PICKS, LOWER, UPPER);
    printf("       %s <lower_limit> <upper_limit> <num_guesses>\n", argv[0]);

    return 1;
  }

  else
  {
    lower       = atoi(argv[1]);
    upper       = atoi(argv[2]);
    num_guesses = atoi(argv[3]);
  }

  if (lower > upper)
  {
    printf("Lower limit cannot be greater than upper limit.\n");

    return 1;
  }

  if (num_guesses < 1)
  {
    printf("The number of guesses must be at least 1.\n");

    return 1;
  }

  if (num_guesses > upper - lower + 1)
  {
    printf("Boundaries error...\n");

    return 1;
  }

  srand(time(NULL));
  generate_distinct_random_numbers(lower, upper, num_guesses);

  return 0;
}
