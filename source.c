//
// Created by Jordan on 9/26/2019.
//
#include <stdio.h>
#include "header.h"

int read_int(FILE *infile){
    int val = 0;
    fscanf(infile,"%d",&val);
    return val;
}
int greatest_common_divisor(int numerator,int denominator){
   // int remainder = 0;

    for (int remainder = numerator  % denominator; denominator != 0;remainder = numerator % denominator) {
        numerator = remainder;
        denominator = denominator % numerator;

        if(denominator == 0){
            return numerator;
        }

    }
    return -1;
}
void output_int(FILE *outfile,int val){
    fprintf(outfile,"%d",val);
}
