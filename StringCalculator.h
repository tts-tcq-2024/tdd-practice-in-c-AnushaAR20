
#include <stdio.h>
#include <stdlib.h>

int add(const char* input1, const char* input2)
{
    int num1 = atoi(input1);
    int num2 = atoi(input2);
    return num1 + num2;
}

int main()
{
  const char* str1 = "1";
  const char* str2 = "2";
  int result = add(str1, str2);
  printf("result %d  \n", result);
}

