#include<bits/stdc++.h>
using namespace std;
//Coin Changing problem - this similar to 01knapsack
int main()
{
  vector<int> coinNominations = {1,5,6,8};
  int totalWithMinimumCoin = 11;
  vector<vector<int>> dp(coinNominations.size(),vector<int> (totalWithMinimumCoin+1,0));
  
  for(int j=0 ; j <totalWithMinimumCoin+1 ; j++) if(j%coinNominations[0] == 0) dp[0][j] = j/coinNominations[0];
  
  for(int i=1; i < coinNominations.size(); i++)
  {
      for(int j=0 ; j < totalWithMinimumCoin+1 ; j++)
      {
          if ( j<coinNominations[i] ) dp[i][j] = dp[i-1][j];
          else {
              dp[i][j] = min(dp[i-1][j], 1 + dp[i][j - coinNominations[i]]);
          }
          
      }
  }
  cout<<"\nThe DP :\n";
  for(int i=0; i < coinNominations.size(); i++)
  {
      for(int j=0 ; j < totalWithMinimumCoin+1 ; j++)
      {
          cout<<dp[i][j]<<" ";
      }
      cout<<"\n";
  }
  cout<<"The minimum coins needed to get the sum "<<totalWithMinimumCoin<<" is "<<dp[coinNominations.size()-1][totalWithMinimumCoin];
  cout<<"\nThe coins are : ";
  int i = coinNominations.size()-1, j = totalWithMinimumCoin;
  while(i>0 && j>0)
  {
      if(dp[i][j] != dp[i-1][j]) {
          cout<<coinNominations[i]<<" ";
          j = j - coinNominations[i];
      }
      else if(dp[i][j] == dp[i-1][j]) {
          i--;
      }
  }
  if(j>0) cout<<j;
  return 0;
}