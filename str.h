#pragma once

#include <unistd.h>

typedef struct str {
  const char *data;
  const size_t size;
} string;

#define STR_LIT(s) ((string){(s), sizeof(s) - 1})

ssize_t write_str(int fd, string s);
