class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> countMap;
        vector<vector<int>> frequencyArr(nums.size()+1);
        vector<int> result;

        for (int i : nums)
        {
            countMap[i] = countMap[i] +1;
        }

        for (auto i : countMap)
        {
            frequencyArr[i.second].push_back(i.first);
        }

        for (int i = frequencyArr.size() -1;i>0;i--)
        {
            for(int j :frequencyArr[i])
            {
                result.push_back(j);
                
                if(result.size()==k)
                    return result;
            }
        }

        return result;
    }
};
