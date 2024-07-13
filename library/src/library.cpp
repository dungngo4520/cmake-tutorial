#include "platform.h"        // platform specific headers
#include "config.h"          // global defines
#include "config_library.h"  // project defines

#include "library.h"

// C standard library
#include <stdio.h>

// C++ standard library
#include <iostream>


void print_version()
{
    printf("Running version: %d.%d.%d\n", VERSION_MAJOR, VERSION_MINOR, VERSION_PATCH);
}

int add(int a, int b)
{
    return a + b;
}
