#include "buf.h"

int main(void) {
  buffer b = {0};
  debug_print_buf(b);
  append_str(&b, STR_LIT("Hello, world!\n"));
  debug_print_buf(b);
  write_buf(STDOUT_FILENO, b);
  free_buf(b);
}
