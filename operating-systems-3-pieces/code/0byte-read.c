#include <stdio.h>

int main() {
  const char *filename = "print.lua";
  FILE *file;

  for (int i = 0; i <= 20; i++) {
    file = fopen(filename, "rb");
    if (file == NULL) {
      perror("Error opening file");
      return 1;
    }
  }

  fseek(file, 0, SEEK_SET);
  fclose(file);

  printf("0-byte read completed successfully");
  return 0;
}
