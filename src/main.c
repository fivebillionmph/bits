#include <stdio.h>
#include "print_bits.h"
#include "parse_args.h"

int main(int argc, char* argv[]) {
    if(argc != 3) {
        fprintf(stderr, "usage: ./bits type value\n");
        return 1;
    }

    parseArgs(argv[1], argv[2]);

    return 0;
}
