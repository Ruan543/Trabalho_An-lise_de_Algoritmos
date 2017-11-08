#include <stdio.h>
void mergesort_i (int ,int[]);
void intercala (int, int, int, int[]);

int main(){
int i,n = 5;
int v[]= {8,4,6,7,1};

mergesort_i (n,v);
}
void mergesort_i (int n, int v[])
{
   int p,i, r;
   int b = 1;
   while (b < n) {
      p = 0;
      while (p + b < n) {
         r = p + 2*b;
         if (r > n) r = n;
         intercala (p, p+b, r, v);
         p = p + 2*b;
      }
      b = 2*b;
   }
   for(i=0;i<n;i++){
    printf("%d", v[i]);
   }
}

 void intercala (int p, int q, int r, int v[])
{
   int i, j, k;
   int w[r-p];

   for (i = p; i < q; ++i)  w[i-p] = v[i];
   for (j = q; j < r; ++j)  w[r-p+q-j-1] = v[j];
   i = 0; j = r-p-1;
   for (k = p; k < r; ++k)
      if (w[i] <= w[j]) v[k] = w[i++];
      else v[k] = w[j--];

}