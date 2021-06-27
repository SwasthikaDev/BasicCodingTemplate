//Basic CP Coding Templates - Swasthika Devadiga
//Insertion Sort
// Best - n
//Average, Worst case Time Complexity - n^2 

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a[100],n;
   cin>>n; //number of elements
   for (int i=0 ; i<n ; i++)
    cin>>a[i]; //collecting elements

   //Buuble Sort    
   
   for (int i =1 ; i <n ; i++) //iterating all elements
   {   
      int j = i-1;
      int key = a[i];
      while(j>=0 && key<a[j])
      {
         a[j+1] = a[j];
         j--;
      } 
       a[j+1]=key;   
   }
   
  for (int i =0 ; i<n ; i++)
   cout<<a[i]<<"\t";
    
    return 0;
}
