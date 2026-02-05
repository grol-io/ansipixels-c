#include "str.h"

ssize_t write_str(int fd, string s) { return write(fd, s.data, s.size); }
