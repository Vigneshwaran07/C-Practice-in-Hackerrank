#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) 
{
  int i,j, and = 0, or = 0, xor = 0, amax = 0, omax = 0, emax = 0;
  for(i=1;i<n;i++)
  {
      for(j=i+1;j<=n;j++)
      {
        and = i&j;
        or = i|j;
        xor = i^j;

        if(and<k) amax = (amax<and)?and:amax;
        if(or<k) omax = (omax<or)?or:omax;
        if(xor<k) emax = (emax<xor)?xor:emax;

      }
      and = or = xor = 0;
  }
  printf("%d\n%d\n%d",amax,omax,emax);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
