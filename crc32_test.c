#include <stdio.h>

#include "crc32.h"

static void print_usage(void);

int main(int argc, char **argv)
{
  uint32_t result;

  /* 引数が少ない */
  if (argc < 2) {
    print_usage();
    return -1;
  }

  /* 計算関数呼び出し */
  if (CRC32_CalculateByFileName(argv[1], &result) < 0) {
    fprintf(stderr, "Failed to calculate CRC32. \n");
    return -2;
  }

  /* 結果表示 */
  fprintf(stdout, "%x\n", result);
  return 0;
}

static void print_usage(void)
{
  fprintf(stdout, "Usage: crc32 filename \n");
}
