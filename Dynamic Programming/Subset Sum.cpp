#include<bits/stdc++.h>
using namespace std;
//Subset Sum Problem
int main()
{
   int total = 15;
   vector<int> v = {2, 3, 7, 8, 10};
   vector<vector<bool>> dp(5,vector<bool>(total+1,0)); 
   for(int i=0 ; i < 5 ; i++) dp[i][0]=1; // filling true in 
   for(int i=0 ; i < 5 ; i++)
   {
       for(int j=1 ; j < total+1 ; j++)
       {
           if(v[i] == j ) dp[i][j] = 1;
           //else if(v[i]<j) dp[i][j] =0;
           if( i>0 && dp[i-1][j] == 1 ) dp[i][j] =1;
           else if( j>=v[i] && i > 0) dp[i][j] = dp[i-1][j - v[i]]; // j > than current so substract and check if its true for the remaining Sum
       }
   }
   cout<<"The Dp : v*j  (2,3,7,8,10)*(0-11) = row * col \n";
    for(int i=0 ; i < 5 ; i++)
   {
       for(int j=0 ; j < total+1 ; j++)
       {
           cout<<dp[i][j]<<" ";
       }
       cout<<"\n";
   }
   cout<<"The digits are : ";
   int i = 4 , j = total;
   while(i>0 && j >0)
   {
       if(dp[i][j] == dp[i-1][j])
       {
           i--;
       }
       else if(dp[i][j] != dp[i-1][j])
       {
           
           cout<<v[i]<<" ";
           j = j - v[i]; // one step up and 8 steps back, makes it 9 step back 
            i--;  // after we are done with j then i
       }
   }
   // check for i =0  and print that
   if(j!=0) cout<<j<<" ";
   return 0;
}