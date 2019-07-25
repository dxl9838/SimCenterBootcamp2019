#include <stdio.h>
#include <omp.h>
#include <time.h>
static int long numSteps=1000000000;
int main() {
    double pi=0;
    //your code
    double dx=1.0/numSteps;
    double x=dx/2.0;
    double start=omp_get_wtime();
    for (int i=0;i<numSteps;i++){
        //your code
           
        pi=pi+dx*4.0/(1.0+x*x);
        x=x+dx;
    }
    //your code
    //clock_t end=clock();
    //time=end-begin;
    printf("PI = %f,duration:%f ms\n",pi,omp_get_wtime()-start);
    return 0;
}
