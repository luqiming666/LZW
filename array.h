#pragma once

typedef struct{
    int prefix; // prefix for byte > 255
    int character; // the last byte of the string
} DictElement;

void dictionaryArrayAdd(int prefix, int character, int value);
int dictionaryArrayPrefix(int value);
int dictionaryArrayCharacter(int value);

