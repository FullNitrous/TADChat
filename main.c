#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void)
{
  int read = 0;
  printf(
  "  _________    ____  ________          __\n" 
  " /_  __/   |  / __ \\/ ____/ /_  ____ _/ /_\n"
  "  / / / /| | / / / / /   / __ \\/ __ `/ __/\n"
  " / / / ___ |/ /_/ / /___/ / / / /_/ / /_\n"
  "/_/ /_/  |_/_____/\\____/_/ /_/\\__,_/\\__/\n");
  printf("Powered by the pure autism of FullNitrous\n");
  printf("________________voidzehn_________________\n\n");

  printf("[MESSAGE] Enter amount of bytes to be read: ");
  while(scanf("%d", &read) != 1)
  {
    printf("[ERROR, MESSAGE] Amount must be a number: ");
    while(getchar() != '\n');
  }
  uint8_t* data = malloc(sizeof(uint8_t) * read);
  for(int i = 0; i < read; i++)
  {
    printf("[%p] %c, 0x%x\n", (uintptr_t)(&data[i]), data[i], data[i]);
  }
  printf("\nString: \n");
  for(int i = 0; i < read; i++)
  {
    putchar(data[i]);
  }
  printf("\n");
  free(data);
  return 0;
}