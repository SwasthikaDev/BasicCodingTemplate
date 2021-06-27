
//Basic CP Coding Templates - Swasthika Devadiga
//Selection Sort
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a[100],n;
   cin>>n; //number of elements
   for (int i=0 ; i<n ; i++)
    cin>>a[i];

    //collecting elements

   //Selection Sort        
   for (int i =0 ; i <n -1 ; i++) // 1st element to the n-1 element
   {    
       int min_index = i; //assinging minimum index to the first element
       for (int j =i+1; j <n  ; j++) // 2nd element till the last element 
       {
           if(a[j]<a[min_index]){ min_index = j;}// 
       }   
        int temp = a[min_index];
        a[min_index] = a[i];
        a[i]=temp;
        
   }
   
  for (int i =0 ; i<n ; i++)
   cout<<a[i]<<"\t";
    
    return 0;
}
