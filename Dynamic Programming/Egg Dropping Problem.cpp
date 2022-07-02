
#include <bits/stdc++.h>
/*Egg Dropping Problem*/
using namespace std;

int
main ()
{
  int no_of_floors = 6, no_of_eggs = 2;
  vector < vector < int >>dp (no_of_eggs + 1,
			      vector < int >(no_of_floors + 1, 0));
  int c = 0;
  for (int i = 0; i <= no_of_floors; i++)
    {
      dp[1][i] = i;
    }
  for (int i = 2; i <= no_of_eggs; i++)
    {
      for (int j = 1; j <= no_of_floors; j++)
	{

	  dp[i][j] = INT_MAX;
	  for (int k = 1; k <= j; k++)
	    {
	      c = 1 + max (dp[i - 1][k - 1], dp[i][j - k]);
	      dp[i][j] = min (dp[i][j], c);
	    }
	}
    }



  cout << dp[no_of_eggs][no_of_floors] << " ";
  return 0;
}
