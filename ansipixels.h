#pragma once

#include "buf.h"
#include "log.h"
#include "raw.h"

#define PASTE_MODE_ON() write_str(STDOUT_FILENO, STR("\033[?2004h"))
