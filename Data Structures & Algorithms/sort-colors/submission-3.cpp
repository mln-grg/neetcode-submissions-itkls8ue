class Solution {
public:

    void swap(int& a, int&b)
    {
        int temp = b;
        b = a;
        a = temp;
    }
    void sortColors(vector<int>& nums) 
    {
        int left =0,right =nums.size()-1,i =0;

        while(i<=right)
        {
            if(nums[i] == 0)
            {
                swap(nums[i],nums[left]);
                left++;
            }
            else if(nums[i] ==2)
            {
                swap(nums[i],nums[right]);
                right--;
                i--;
            }
            
            i++;
        }
    }
};