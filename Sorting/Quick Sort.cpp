//Basic CP Coding Templates - Swasthika Devadiga
//Quick Sort
// Best, Average  - n(log(n))
//Worst case Time Complexity - n^2 

#include<bits/stdc++.h>
using namespace std;

int divide(int a[] , int l , int h)
{
  int p = a[h];
  int i = l - 1;
  for (int j = l; j < h; j++) {
    if (a[j] <= p) {
      i++;
      int t = a[i];
      a[i] = a[j];
      a[j] = t;
    }
  }
  
  int t = a[i+1];
  a[i+1] = a[h];
  a[h] = t;
  return i+1;
}

void qsort(int a[] , int l , int h)
{
if(l<h)
{
  int p = divide (a,l,h);
  qsort(a, l, p - 1);
  qsort(a, p+1, h); // note : p hasnt been mentioned 
}
}

int main() {
  int n; 
  cin>>n;
  int arr[n];
  for(int i = 0 ;i <n;i++)
    cin>>arr[i];
 // int size = sizeof(arr) / sizeof(arr[0]);

  qsort(arr, 0, n - 1);

  cout << "Sorted array: \n";
  for(int i = 0 ;i <n;i++)
    cout<<arr[i]<<" ";
  
  return 0;
}
