#include <stdio.h>
#include "header.h"
int main() {
    FILE *infile = NULL;
    FILE *outfile = NULL;

    infile = fopen("C:\\Users\\Jordan\\CLionProjects\\Lab5Part3\\input.txt","r");
    outfile = fopen("C:\\Users\\Jordan\\CLionProjects\\Lab5Part3\\output.txt","w");

    int one = read_int(infile);
    int two = read_int(infile);

    int gcd = greatest_common_divisor(one,two);

    output_int(outfile,gcd);

    fclose(infile);
    fclose(outfile);

    return 0;
}