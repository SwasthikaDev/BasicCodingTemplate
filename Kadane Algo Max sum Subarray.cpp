#include <bits/stdc++.h>
using namespace std;

int maxsum(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int sum = nums[0], sumc = nums[0];
        for(int i=1;i<nums.size();i++)
        {
           sumc = max(sumc+nums[i],nums[i]);
           sum = max(sum,sumc);
        }
        return sum;
    }
int main()
{
vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
int sumzz = maxsum(nums);
cout<<sumzz<<endl;
}
