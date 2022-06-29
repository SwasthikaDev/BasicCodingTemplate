#include<bits/stdc++.h>
using namespace std;
// 01 knapsack cant split it :)

int main()
{
     
    vector<vector<int>> v= { {1,1}, {3,4}, {4,5}, {5,7} };  // vector with wt and its value v[0-3][0-1] 4 rows and 2 columns
     
    int maxwt = 7; //max wt that bag can carry (0-7) => 8
     
    vector<vector<int>> dp(4,vector<int>(8,0)); // total items * ( 0 - maxwt) 2d array // val * wt array 
   
    for(int i=0; i <4; i++)
    {
        for(int j=0; j < 8 ; j++) // 8 becoz value starting from 0 - 7
        {
            if(i==0)
            {
                if(j>=v[i][0]) dp[i][j] = v[i][1];
            } 
            else if(j<v[i][0]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j],v[i][1]+dp[i-1][j-v[i][0]]);
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
   
    cout<<"\n MAX VALUE : " << dp[3][7]<<" ";
    
    return 0;
}