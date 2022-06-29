#include<bits/stdc++.h>
using namespace std;
//Minimum Edit distance - given operations like add, delete. min operations required to make 2 strings a equal
int main()
{
  string  a = "abcdef" , b = "azced";
  int size1 = 6, size2 = 5;
  // a b c d e f
  // a z c e d 
  // a b c e f      - > z->b, delete d, d->f
  vector<vector<int>> dp( size1+1, vector<int>(size2+1,0) );
  
  for(int i = 1 ; i <size1+1 ; i++) dp[i][0] = i;
  for(int i = 1 ; i <size2+1 ; i++) dp[0][i] = i;
  
  for(int i = 1 ; i <size1+1; i++)
  {
      for(int j=1; j <size2+1 ; j++)
      {
          if(a[i] == b[j]) dp[i][j] = dp[i-1][j-1];
          else if (a[i] != b[j]) dp[i][j] = 1 + min( dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]) ) ;
      }
  }
  cout<<"the dp : \n";
  for(int i = 0 ; i <size1+1; i++)
  {
      for(int j=0; j <size2+1 ; j++)
      {
          cout<<dp[i][j]<<" ";
      }
      cout<<"\n";
  }
  cout<<"Number of operations needed :"<<dp[size1][size2];
  return 0;
}