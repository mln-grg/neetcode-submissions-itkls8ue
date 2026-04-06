class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int count[3] = {};
        
        for (int x : nums) 
            count[x]++;
        
        int i = 0;
        
        for (int color = 0; color < 3; color++)
        {
            while (count[color]--) 
            {
                nums[i++] = color;
            }
        }
    }
};