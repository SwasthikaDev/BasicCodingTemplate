//Basic CP Coding Templates - Swasthika Devadiga
//Bubble Sort
// Best - n
//Average, Worst case Time Complexity - n^2 
//Suppose if we take a sorted array, it still will still check
//So keep a boolean and check if its swapped or not
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a[100],n;
   cin>>n; //number of elements
   for (int i=0 ; i<n ; i++)
    cin>>a[i]; //collecting elements

   //Buuble Sort    
   
   for (int i =0 ; i <n -1 ; i++) //iterating all elements
   {   
       bool swap = false; //optimising the code 
     
     for (int j =0 ; j <n -i-1 ; j++) 
     {
         if(a[j]>a[j+1]) // last elements would have been sorted
        {   
            int temp = a[j];
            a[j]= a[j+1];
            a[j+1] = temp;
            swap = true;
        }
       
     }
      if(swap==false) break;
   }
   
  for (int i =0 ; i<n ; i++)
   cout<<a[i]<<"\t";
    
    return 0;
}
