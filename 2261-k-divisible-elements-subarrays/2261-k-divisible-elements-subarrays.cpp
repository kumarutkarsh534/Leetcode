class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) 
    {
        int n = nums.size();
        set<vector<int>> ans;
        int i,j;
        for(int i=0;i<n;i++)
        {
            vector<int> vec;
            int c=0;
            for(j=i;j<n;j++)
            {
                vec.push_back(nums[j]);
                if(nums[j]%p==0)
                {
                    c++;
                }
                if(c>k)
                    break;
                ans.insert(vec);
            }
        }
        return ans.size();
    }
};