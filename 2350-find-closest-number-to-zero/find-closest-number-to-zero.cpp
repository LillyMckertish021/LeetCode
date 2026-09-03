class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = nums[0];
        for(int num: nums){
            int dist = abs(num);
            if(dist < abs(closest) || (dist == abs(closest) && num > closest)){
                closest = num;
            }
        }
        return closest;
    }
};