#pragma once

#include "config.h"

#if defined(WINDOWS)
#include "Windows.h"
#endif

#if defined(LINUX)
#include <unistd.h>
#endif

#if defined(MACOS)
#include <unistd.h>
#endif
