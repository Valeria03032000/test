#include<stdio.h>
void SheikerSort(int *a, const int n)
{
           int l, r, i, k, temp;
           k = l = 0;
           r = n - 2;
           while(l <= r)
           {
              for(i = l; i <= r; i++)
                 if (a[i] > a[i+1])
                 {
                    temp = a[i]; a[i] = a[i+1]; a[i+1] = temp;
                    k = i;
                 }
              r = k - 1;
              for(i = r; i >= l; i--)
                 if (a[i] > a[i+1])
                 {
                    temp = a[i]; a[i] = a[i+1]; a[i+1] = temp;
                    k = i;
                 }
              l = k + 1;
           }
        }
 
int main()
{
   int i, a[5] = {0, 4, 3, 1, 2};
   SheikerSort(a, 5);
   for(i = 0; i < 5; i++)
      printf("%d ", a[i]);
      return 0;
}
