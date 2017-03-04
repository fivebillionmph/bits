#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "parse_args.h"
#include "print_bits.h"

void parseArgs(const char* type, const char* value) {
    if(strcmp(type, "uint8_t") == 0) {
        parseUINT8(value);
    } else if(strcmp(type, "int8_t") == 0) {
        parseINT8(value);
    } else if(strcmp(type, "uint16_t") == 0) {
        parseUINT16(value);
    } else if(strcmp(type, "int16_t") == 0) {
        parseINT16(value);
    } else if(strcmp(type, "uint32_t") == 0) {
        parseUINT32(value);
    } else if(strcmp(type, "int32_t") == 0) {
        parseINT32(value);
    } else if(strcmp(type, "uint64_t") == 0) {
        parseUINT64(value);
    } else if(strcmp(type, "int64_t") == 0) {
        parseINT64(value);
    } else if(strcmp(type, "float") == 0) {
        parseFLOAT(value);
    } else if(strcmp(type, "double") == 0) {
        parseDOUBLE(value);
    } else {
        fprintf(stderr, "Unrecognized type\n");
    }
}

void parseUINT8(const char* value) {
    uint8_t val = strtoul(value, NULL, 10);
    printf("uint8_t\t%d\t", val);
    printBits(sizeof(val), &val);
}

void parseINT8(const char* value) {
    int8_t val = strtol(value, NULL, 10);
    printf("int8_t\t%d\t", val);
    printBits(sizeof(val), &val);
}

void parseUINT16(const char* value) {
    uint16_t val = strtoul(value, NULL, 10);
    printf("uint16_t\t%d\t", val);
    printBits(sizeof(val), &val);
}

void parseINT16(const char* value) {
    int16_t val = strtol(value, NULL, 10);
    printf("int16_t\t%d\t", val);
    printBits(sizeof(val), &val);
}

void parseUINT32(const char* value) {
    uint32_t val = strtoul(value, NULL, 10);
    printf("uint32_t\t%d\t", val);
    printBits(sizeof(val), &val);
}

void parseINT32(const char* value) {
    int32_t val = strtol(value, NULL, 10);
    printf("int32_t\t%d\t", val);
    printBits(sizeof(val), &val);
}

void parseUINT64(const char* value) {
    uint64_t val = strtoull(value, NULL, 10);
    printf("uint64_t\t%d\t", val);
    printBits(sizeof(val), &val);
}

void parseINT64(const char* value) {
    int64_t val = strtoll(value, NULL, 10);
    printf("int64_t\t%d\t", val);
    printBits(sizeof(val), &val);
}

void parseFLOAT(const char* value) {
    float val = strtof(value, NULL);
    printf("float\t%f\t", val);
    printBits(sizeof(val), &val);
}

void parseDOUBLE(const char* value) {
    double val = strtod(value, NULL);
    printf("double\t%f\t", val);
    printBits(sizeof(val), &val);
}

