//Basic CP Coding Templates - Swasthika Devadiga
// Best, Average, Worst case Time Complexity - n(log(n))

//Merge Sort

#include <bits/stdc++.h>
using namespace std;

void merge(int a[] , int l, int m , int r)
{
  int n1 = m - l + 1;
  int n2 = r -m;
  int L[n1], M[n2];
  for (int i = 0; i < n1; i++)
    L[i] = a[l + i];
  for (int j = 0; j < n2; j++)
    M[j] = a[m + 1 + j];
  int i, j, k;
  i = 0;
  j = 0;
  k = l;
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      a[k] = L[i];
      i++;
    } else {
      a[k] = M[j];
      j++;
    }
    k++;
  }
  
  while (i < n1) {
    a[k] = L[i];
    i++;
    k++;
  }
  while (j < n2) {
    a[k] = M[j];
    j++;
    k++;
  }
}
void divide(int a[], int l, int r)
{
if(l<r)
{
   int m = l+(r-1)/2;
   divide(a, l, m);
   divide(a, m + 1, r);
   merge(a,l,m,r);
}
}

int main() {
  int n; 
  cin>>n;
  int arr[n];
  for(int i = 0 ;i <n;i++)
    cin>>arr[i];
 // int size = sizeof(arr) / sizeof(arr[0]);

  divide(arr, 0, n - 1);

  cout << "Sorted array: \n";
  for(int i = 0 ;i <n;i++)
    cout<<arr[i]<<" ";
  
  return 0;
}
