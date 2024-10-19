#include <iostream>
using namespace std;

int main(void)
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];

  int eleCtr = 1, max = 1;
  for (int i = 0; i < n; i++)
  {
    int sum = arr[0], current_sum = 0, arrCtr = 1, k = 0;
    for (int j = 1; j < eleCtr; j++) sum+= arr[j];
    
    while (eleCtr + k < n)
    { 
      current_sum+= arr[eleCtr + k];
      if (current_sum > sum) break;
      else if (current_sum == sum)
      {
        current_sum = 0;
        arrCtr++;
        if ((eleCtr + k == n - 1) && (arrCtr > max)) max = arrCtr;
        k++;
      }
      else if (current_sum < sum) k++;
    }
    eleCtr++;
  }
  
  cout << max << endl;
}