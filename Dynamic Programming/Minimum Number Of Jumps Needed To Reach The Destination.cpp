
#include <bits/stdc++.h>
/*Minimum Number Of Jumps To Reach Destination*/
using namespace std;

int
main ()
{
  vector < int >v = { 2, 3, 1, 1, 2, 4, 2, 0, 1, 1 };

  vector < int >no_of_jumps (10), actual_jump (10);

  for (int i = 0; i < 10; i++)
    no_of_jumps[i] = INT_MAX;
  for (int i = 0; i < 10; i++)
    actual_jump[i] = 0;

  no_of_jumps[0] = 0;

  for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < i; j++)
	{
	  if (i <= v[j] + j)
	    {
	      if (no_of_jumps[i] > 1 + no_of_jumps[j])
		actual_jump[i] = j;
	      no_of_jumps[i] = min (1 + no_of_jumps[j], no_of_jumps[i]);

	    }
	}
      cout << no_of_jumps[i] << " ";
    }
  cout << "\nTotal Number Of Jumps Needed : " << no_of_jumps[9];
  cout << "\nThe steps include : ";
  int i = 0, j = 0;
  while (i < 9)
    {
      if (actual_jump[i] != actual_jump[i + 1])
	cout << actual_jump[i] << " ";
      i++;
    }
  cout << actual_jump[9] << " 9";
  return 0;
}
