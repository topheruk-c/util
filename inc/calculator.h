#ifndef CALCULATOR_H
#define CALCULATOR_H

#define EXPORT __attribute__((__visibility__("default")))

typedef enum
{
    SUM,
    SUB,
    MULT,
    DIV
} operation;

typedef struct {
    int error;
    double value;
} result_t;

EXPORT result_t compute(double a, double b, operation o);

#endif  // CALCULATOR_H