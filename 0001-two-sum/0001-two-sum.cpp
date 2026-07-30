// Optimal Time O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(mp.count(complement)){
                return {mp[complement], i};
            }
            mp[nums[i]] = i;
        }

        return {};

    }
};



// Brute force Time O(n^2)

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i = 0; i < nums.size() - 1; i++){
//             for(int j = i + 1; j < nums.size(); j++) {
//                 if(nums[i] + nums[j] == target){
//                     return {i,j};
//                 }
//             }
//         }
//         return {};
//     }
// };