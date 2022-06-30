#include<bits/stdc++.h>
using namespace std;
//Longest increasing subsequnece length (LIS)
// Example 3 4 (-1) (0) 6 (2) (3) => LIS length = 4
// 2 5 1 8 3 => 3. LIS consisting of 2 5 8 
int main()
{

  vector<int> v = {2,5,1,8,3};
  int v_length = v.size();
  
   int dp[v_length]={1};
  //for(int i=0 ; i< v_length ;i++) cout<<dp[i]<<" "; cout<<"\n";
  
  //memset(dp,0,sizeof(dp)); // memset is used to make all values as 0 or -1, wont work otherwise
  
  //for(int i=0 ; i< v_length ;i++) cout<<dp[i]<<" "; cout<<"\n";
  
  for(int i=0 ; i< v_length ;i++) dp[i] = 1;
  
  int j =0 , i = 0;
  while(i<v_length)
  {
      j=0;
      while(j<v_length)
      {
          if(v[j]<v[i]) 
          {
              dp[i] = max(dp[i],dp[j]+1);
          }
          j++;
      }
      i++;
  }
  cout<<"Longest Increasing Subsequence length is : "<<dp[v_length-1];
  return 0;
}