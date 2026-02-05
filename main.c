#include "buf.h"

int main(void) {
  buffer b = {0};
  debug_print_buf(b); // check 0 init is fine
  // add some binary:
  append_str(&b, STR_LIT("A\01B\00C\02D\n"));
  // debug print & output stdout
  debug_print_buf(b);
  write_buf(STDOUT_FILENO, b);

  b.size = 0; // clear/reset/reuse
  append_str(&b, STR_LIT("Hello, world!\n"));
  // same: debug print & output stdout
  debug_print_buf(b);
  write_buf(STDOUT_FILENO, b);
  free_buf(b);
}
