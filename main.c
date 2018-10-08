#include <stdio.h>

int main(void)
{
  size_t read = -1;

  printf("========================================\n");
  printf("Terry A Davis random memory address chat\n");
  printf("\n========================================\n\n");

  printf("[MESSAGE] Enter amount of bytes to be read: ");
  while(scanf("%d", &read) != 1)
  {
    printf("[ERROR, MESSAGE] Amount must be a number: ");
    while(getchar() != '\n');
  }
  printf("lol: %d\n", read);
}