class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numsMap;

    for (int p = 0; p < nums.size(); ++p) {
        auto currentMapVal = numsMap.find(nums[p]);

        if (currentMapVal != numsMap.end()) {
            return {currentMapVal->second, p};
        } else {
            int numberToFind = target - nums[p];
            numsMap[numberToFind] = p;
        }
    }

    return {-1, -1};
    }
};