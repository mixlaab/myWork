#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }
     if (swapped == false)
        break;
   }
}

int main()
{
    int contador=0;
    int arr[] = {3,4,7,5,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    for (int i = 0; i<=n; i++){
        contador = arr[i];
        contador = contador + 1;
        if (contador != arr[i + 1]){
            printf("El numero faltante: \n");
            cout<<contador<<endl;
        }
        else if (contador == n){
            printf("El numero faltante: \n");
            cout<<contador<<endl;
          break;
        }
    }
}
