#include <math.h>
#include <string.h>
#include <stdlib.h>

#ifndef N_MATH_H
#define N_MATH_H

#define LRGVAL HUGE_VAL
#define LRGVALF HUGE_VALF
#define LRGVALL HUGE_VALL
#define eul exp
#define eulf expf
#define eull expl
#define eulm1 expm1
#define eulm1f expm1f
#define eulm1l expm1l
#define base2 exp2
#define base2f exp2f
#define base2l exp2l
#define ln log
#define lnf logf
#define lnl logl
#define ln1p log1p
#define ln1pf log1pf
#define ln1pl log1pl
#define min fmin
#define minf fminf
#define minl fminl
#define max fmax
#define maxf fmaxf
#define maxl fmaxl
#define absd fabs
#define absf fabsf
#define absld fabsl
double slrie(double a, double b, double (*f)(double), double dx) {
    if (a > b) {
        double temp = a;
        a = b;
        b = temp;
    }
    double sum = 0;
    for (double x = a; x+dx <= b; x += dx)
        sum += f(x)*dx;
    return sum;
}
float slrief(float a, float b, float (*f)(float), float dx) {
    if (a > b) {
        float temp = a;
        a = b;
        b = temp;
    }
    float sum = 0;
    for (float x = a; x+dx <= b; x += dx)
        sum += f(x)*dx;
    return sum;
}
long double slriel(long double a, long double b, long double (*f)(long double),
long double dx) {
    if (a > b) {
        long double temp = a;
        a = b;
        b = temp;
    }
    long double sum = 0;
    for (long double x = a; x+dx <= b; x += dx)
        sum += f(x)*dx;
    return sum;
}
double srrie(double a, double b, double (*f)(double), double dx) {
    if (a > b) {
        double temp = a;
        a = b;
        b = temp;
    }
    double sum = 0;
    for (double x = a; x <= b-dx; x += dx)
        sum += f(x+dx)*dx;
    return sum;
}
float srrief(float a, float b, float (*f)(float), float dx) {
    if (a > b) {
        float temp = a;
        a = b;
        b = temp;
    }
    float sum = 0;
    for (float x = a; x <= b-dx; x += dx)
        sum += f(x+dx)*dx;
    return sum;
}
long double srriel(long double a, long double b, long double (*f)(long double),
long double dx) {
    if (a > b) {
        long double temp = a;
        a = b;
        b = temp;
    }
    long double sum = 0;
    for (long double x = a; x <= b-dx; x += dx)
        sum += f(x+dx)*dx;
    return sum;
}
double smrie(double a, double b, double (*f)(double), double dx) {
    if (a > b) {
        double temp = a;
        a = b;
        b = temp;
    }
    double sum = 0;
    for (double x = a; x <= b-(dx/2); x += dx)
        sum += f(x+(dx/2))*dx;
    return sum;
}
float smrief(float a, float b, float (*f)(float), float dx) {
    if (a > b) {
        float temp = a;
        a = b;
        b = temp;
    }
    float sum = 0;
    for (float x = a; x <= b-(dx/2); x += dx)
        sum += f(x+(dx/2))*dx;
    return sum;
}
long double smriel(long double a, long double b, long double (*f)(long double),
long double dx) {
    if (a > b) {
        long double temp = a;
        a = b;
        b = temp;
    }
    long double sum = 0;
    for (long double x = a; x <= b-(dx/2); x += dx)
        sum += f(x+(dx/2))*dx;
    return sum;
}
double strp(double a, double b, double (*f)(double), unsigned long n) {
    if (a > b) {
        double temp = a;
        a = b;
        b = temp;
    }
    double h = (b-a)/n;
    double sum = f(a);
    double x = a+h;
    for (; x <= (b-h); x += h)
        sum += 2*f(x);
    sum += f(x);
    return sum*(h/2);
}
float strpf(float a, float b, float (*f)(float), unsigned int n) {
    if (a > b) {
        float temp = a;
        a = b;
        b = temp;
    }
    float h = (b-a)/n;
    float sum = f(a);
    float x = a+h;
    for (; x <= (b-h); x += h)
        sum += 2*f(x);
    sum += f(x);
    return sum*(h/2);
}
long double strpl(long double a, long double b, long double (*f)(long double),
unsigned long n) {
    if (a > b) {
        long double temp = a;
        a = b;
        b = temp;
    }
    long double h = (b-a)/n;
    long double sum = f(a);
    long double x = a+h;
    for (; x <= (b-h); x += h)
        sum += 2*f(x);
    sum += f(x);
    return sum*(h/2);
}
double strparr(double* arr, unsigned long n, double h) {
    double sum = arr[0];
    unsigned long x = 1;
    for (; x < n; x++)
        sum += 2*arr[x];
    sum += arr[n];
    return sum*(h/2);
}
float strparrf(float* arr, unsigned int n, float h) {
    float sum = arr[0];
    unsigned int x = 1;
    for (; x < n; x++)
        sum += 2*arr[x];
    sum += arr[n];
    return sum*(h/2);
}
long double strparrl(long double* arr, unsigned long n, long double h) {
    long double sum = arr[0];
    unsigned long x = 1;
    for (; x < n; x++)
        sum += 2*arr[x];
    sum += arr[n];
    return sum*(h/2);
}
double ssmp(double a, double b, double (*f)(double), unsigned long n) {
    if (a > b) {
        double temp = a;
        a = b;
        b = temp;
    }
    double h = (b-a)/n;
    unsigned int extra = 0;
    if (n&1) {
        extra++;
        n--;
    }
    double sum = f(a);
    double x = a+h;
    unsigned int coeff = 4;
    for (; x <= a+((n-1)*h); x += h, coeff = (coeff == 4 ? 2 : 4))
        sum += coeff*f(x);
    sum += f(x);
    sum *= (h/3);
    if (extra)
        return sum + (h*(f(b-h)+f(b)))/2;
    return sum;
}
float ssmpf(float a, float b, float (*f)(float), unsigned int n) {
    if (a > b) {
        float temp = a;
        a = b;
        b = temp;
    }
    float h = (b-a)/n;
    unsigned int extra = 0;
    if (n&1) {
        extra++;
        n--;
    }
    float sum = f(a);
    float x = a+h;
    unsigned int coeff = 4;
    for (; x <= a+((n-1)*h); x += h, coeff = (coeff == 4 ? 2 : 4))
        sum += coeff*f(x);
    sum += f(x);
    sum *= (h/3);
    if (extra)
        return sum + (h*(f(b-h)+f(b)))/2;
    return sum;
}
long double ssmpl(long double a, long double b, long double (*f)(long double),
unsigned long n) {
    if (a > b) {
        long double temp = a;
        a = b;
        b = temp;
    }
    long double h = (b-a)/n;
    unsigned int extra = 0;
    if (n&1) {
        extra++;
        n--;
    }
    long double sum = f(a);
    long double x = a+h;
    unsigned int coeff = 4;
    for (; x <= a+((n-1)*h); x += h, coeff = (coeff == 4 ? 2 : 4))
        sum += coeff*f(x);
    sum += f(x);
    sum *= (h/3);
    if (extra)
        return sum + (h*(f(b-h)+f(b)))/2;
    return sum;
}
double ssmparr(double* arr, unsigned long n, double h) {
    unsigned int extra = 0;
    if (n&1) {
        extra++;
        n--;
    }
    double sum = arr[0];
    unsigned int coeff = 4;
    for (unsigned long x = 1; x < n; x++, coeff = (coeff == 4 ? 2 : 4))
        sum += coeff*arr[x];
    sum += arr[n];
    sum *= (h/3);
    if (extra)
        return sum + (h*(arr[n]+arr[n+1]))/2;
    return sum;
}
float ssmparrf(float* arr, unsigned int n, float h) {
    unsigned int extra = 0;
    if (n&1) {
        extra++;
        n--;
    }
    double sum = table[0];
    unsigned int coeff = 4;
    for (unsigned int x = 1; x < n; x++, coeff = (coeff == 4 ? 2 : 4))
        sum += coeff*arr[x];
    sum += arr[n];
    sum *= (h/3);
    if (extra)
        return sum + (h*(arr[n]+arr[n+1]))/2;
    return sum;
}
long double ssmparrl(long double* arr, unsigned long n, long double h) {
    unsigned int extra = 0;
    if (n&1) {
        extra++;
        n--;
    }
    long double sum = arr[0];
    unsigned int coeff = 4;
    for (unsigned long x = 1; x < n; x++, coeff = (coeff == 4 ? 2 : 4))
        sum += coeff*arr[x];
    sum += arr[n];
    sum *= (h/3);
    if (extra)
        return sum + (h*(arr[n]+arr[n+1]))/2;
    return sum;
}

#endif
