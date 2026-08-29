class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> nums;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                nums.push_back(matrix[i][j]);
            }
        }

        int low = 0;
        int high = nums.size()-1;
        
        while(low<=high){
            int mid = (low+high) / 2;

            if(nums[mid] == target){
                return true;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
        return false;
    }
};
