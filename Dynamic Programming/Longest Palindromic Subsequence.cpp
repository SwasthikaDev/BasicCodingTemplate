#include<bits/stdc++.h>
using namespace std;
// Longest Palindromic Subsequence (LPS)
// Eg : agbdba => abdba (Note : its subsequence and not substring)
int
main ()
{
  string s = "agbdba";
  int s_size = s.size ();

  vector < vector < int >>dp (s_size + 1, vector < int >(s_size + 1, 0));

  for (int i = 0; i < s_size + 1; i++)
    dp[i][i] = 1;		// if there was only 1 char - max palindromic lenght  =1

  for (int l = 2; l < s_size + 1; l++)
    {
      for (int i = 0; i < s_size - l + 1; i++)
	{
	  int j = i + l - 1;
	  if (l == 2 && s[i] == s[j])
	    {
	      dp[i][j] = 2;
	    }
	  else if (s[i] == s[j])
	    {
	      dp[i][j] = dp[i + 1][j - 1] + 2;
	    }
	  else
	    {
	      dp[i][j] = max (dp[i + 1][j], dp[i][j - 1]);
	    }
	}
    }
  cout << dp[0][s_size - 1];
  return 0;
}
