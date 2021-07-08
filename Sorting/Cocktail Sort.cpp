//Cocktail shaker sort, also known as bidirectional bubble sort ( shaker sort )

//// Best - n 
// Average, Worst case Time Complexity - n^2

#include <bits/stdc++.h>
using namespace std;
void CT(int a[] , int n)
{
  bool swap = true;
  int s = 0;
  while(swap!= false)
  { 
      swap =false;
     for (int i = s; i < n; i++)
        {
            if (a[i] > a[i + 1]) 
            {
                int t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
                swap = true;
            }
        }
     if(!swap) break;
     n--;
     for (int i = n - 1; i >= s; i--)
        {
            if (a[i] > a[i + 1])
            {
                int t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
                swap = true;
            }
        }  
       
       s++; 
  }
  

}


int main() {
  int n; 
  cin>>n;
  int arr[n];
  for(int i = 0 ;i <n;i++)
    cin>>arr[i];
 // int size = sizeof(arr) / sizeof(arr[0]);

  CT(arr, n-1);

  cout << "Sorted array: \n";
  for(int i = 0 ;i <n;i++)
    cout<<arr[i]<<" ";
  
  return 0;
}
