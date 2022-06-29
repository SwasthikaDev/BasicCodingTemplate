#include<bits/stdc++.h>
using namespace std;
//Longest Common Subsequence (lcs)
int main()
{
    string a= "abcdaf", b = "acbcf"; // length of lcs = 4 i.e abcf
    
    vector<vector<int>> dp(7,vector<int>(6,0)); // one more than string length
    
    for(int i=1 ; i < 7 ; i ++ ) // have 0th row and col with 0 dp[0][i]=0 && dp[j][0] = 0
    {
        for(int j = 1 ; j < 6 ; j ++)
        {
            if(a[i-1] == b[j-1]) dp[i][j] = 1 + dp[i-1][j-1]; // dp has dummy zeros but a and b starts with 0
            else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
        }
    }
    cout<<"The DP : \n";
    for(int i=0 ; i < 7 ; i ++ ) // have 0th row and col with 0 dp[0][i]=0 && dp[j][0] = 0
    {
        for(int j = 0 ; j < 6 ; j ++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"The Longest Common Subsequence is: "<<dp[6][5];
    cout<<"\nThe letters are : ";
    int i = 6,j=5;
    while(i>0 && j >0)
    {
        if(dp[i][j] == dp[i-1][j]) i--;
        else if(dp[i][j] == dp[i][j-1]) j--;
        else if(dp[i][j] != dp[i-1][j-1] ) {cout<<a[i-1]<<" "; i--; j--;}
    }
}