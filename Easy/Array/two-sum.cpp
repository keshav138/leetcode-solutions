// Two Sum
// Difficulty: Easy  |  Topic: Array
// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;
        unordered_map<int, int> map;

        for(int i=0; i<nums.size(); i++){
            int complement = target - nums[i];
            if(map.find(complement) != map.end()){
                ans.push_back(map[complement]);
                ans.push_back(i);
                break;
            }
            map[nums[i]] = i;
        }
        return ans;
    }
};