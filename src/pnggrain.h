#ifndef PNGGRAIN_H
#define PNGGRAIN_H

#include <png.h>

typedef struct pnggrain_options {
    int width;
    int height;
    int min_value;
    int max_value;
    int min_alpha;
    int max_alpha;
} pnggrain_options_s;

int main(int argc, char **argv);

void usage(void);

int pnggrain_generate(pnggrain_options_s pnggrain_options,
                      char *filename);

int random_value(int from, int to);

void print_pnggrain_options(pnggrain_options_s pnggrain_options, FILE *fp);

#endif
