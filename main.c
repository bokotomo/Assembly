#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

void RunFunction(double *DataA, double *DataB, double *DataC, unsigned long long ForLoopNum){
  int i;
  for(i=0;i<ForLoopNum;i++){
    DataA[i] = DataC[i] + DataB[i];
  }
}
int main(int argc, char *argv[]){
  puts("RoofLine Time measurement"); 
  return 0;
}
