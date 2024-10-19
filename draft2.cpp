#include <iostream>
using namespace std;
void merge(int a[], int left, int mid, int right)
{
  int n1 = mid - left + 1;
  int n2 = right - mid;
  int L[n1], R[n2];

  for (int i = 0; i < n1; i++)
  {
    L[i] = a[left + i];
  }

  for (int i = 0; i < n2; i++)
  {
    R[i] = a[mid + 1 + i];
  }

  int i = 0, j = 0, k = left;
  while (i < n1 && j < n2)
  {
    if (L[i] <= R[j])
    {
      a[k] = L[i];
      i++;
    }
    else
    {
      a[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1)
  {
    a[k] = L[i];
    i++;
    k++;
  }

  while (j < n2)
  {
    a[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort(int a[], int left, int right)
{
  if (left == right) return;

  int middle = (left + right) / 2;
  mergeSort(a, 0, middle);
  mergeSort(a, middle + 1, right);

  merge(a, left, middle, right);
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is: ";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, arr_size - 1);

    cout << "Sorted array is: ";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}