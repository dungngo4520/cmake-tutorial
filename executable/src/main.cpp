// project header
#include "platform.h"           // platform specific headers
#include "config.h"             // global defines
#include "config_executable.h"  // project defines

// C standard library
#include <stdio.h>

// C++ standard library
#include <iostream>


int wmain(int argc, wchar_t* argv[])
{
    printf("Running version: %d.%d.%d\n", VERSION_MAJOR, VERSION_MINOR, VERSION_PATCH);

    if (argc < 3) {
        printf("Usage: %ls <arg1> <arg2>\n", argv[0]);
        return 1;
    }

    auto n1 = _wtoi(argv[1]);
    auto n2 = _wtoi(argv[2]);

    printf("%d\n", n1 + n2);

    return EXIT_SUCCESS;
}