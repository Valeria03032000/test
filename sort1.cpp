#include <iostream>
using namespace std;
void SheikerSort(int arr[], int arr_size)
{
        
  int left, right, i, k, temp;
           k = left = 0;
           right = arr_size-2;
           while(left <= right)
           {
              for(i = left; i <= right; i++)
                 if (arr[i] > arr[i+1])
                 {
                  temp = arr[i];
                   arr[i] = arr[i+1];
                   arr[i+1] = temp;
                    k = i;
                 }
              right = k - 1;
              for(i = right; i >= left; i--)
                 if (arr[i] > arr[i+1])
                 {
                    temp = arr[i];
                   arr[i] = arr[i+1];
                   arr[i+1] = temp;
                    k = i;
                 }
              left = k + 1;
           }
        }
 
int main()
{
int i, arr_size, arr[arr_size];
   cout << "Введите размерность массива" << ' ';
cin >> arr_size;
cout << "Введите элементы массива" << ' ';

for(i = 0; i < arr_size; i++)
 cin >> arr[i];

SheikerSort(arr, arr_size);
for (i = 0; i < arr_size; i++){
    std::cout << arr[i] << " " ;   
}
 return 0;
}
