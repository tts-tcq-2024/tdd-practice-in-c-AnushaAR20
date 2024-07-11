
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(const char* input)
{
    int sum =0;
    char*split;
    char input_copy[100];

    strcpy(input_copy, input);

    split = strtok(input_copy, ",");

    while (split!=NULL)
        {
            sum+=atoi(split);
            split = strtok(NULL, ",");
        }
    return sum;
}

int main()
{
  char input[100];

  fgets(input, sizeof(input), stdin);

  input[strcspn(input, "\n")] = 0;
    
  int result = add(input);
  printf("result %d  \n", result);
    return 0;
}

