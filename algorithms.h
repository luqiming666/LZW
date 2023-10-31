#pragma once

enum {
    dictionarySize = 4095, // maximum number of entries defined for the dictionary (2^12 = 4096)
    codeLength = 12, // the codes which are taking place of the substrings
    maxValue = dictionarySize - 1
};

// function declarations
void compress(FILE *inputFile, FILE *outputFile);
void decompress(FILE *inputFile, FILE *outputFile);
int decode(int code, FILE * outputFile);

void writeBinary(FILE* output, int code);
int readBinary(FILE* input);

