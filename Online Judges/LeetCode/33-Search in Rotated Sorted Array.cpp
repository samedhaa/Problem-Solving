class Solution {
public:
    int BinarySearch(vector<int> shiftArr, int val, int left, int right) {
     
        while(left <= right) {
          int middle = left + (right - left) / 2;
          if(shiftArr[middle] > val) {
            right = middle - 1;
          }
          else if(shiftArr[middle] < val){
            left = middle + 1;
          }
          else{
            return middle;
          }
        }
        return -1;
    }

    int getEnd(vector<int> shiftArr, int val, int left, int right) {
      while(left < right) {
        int middle = left + (right - left) / 2;
        if(shiftArr[middle] > val) {
          left = middle;
        }
        else {
          right = middle;
        }
         val = shiftArr[middle];
      }
      return left;
    }
    
    int search(vector<int>& nums, int target) {
        if(nums.empty()) {
          return -1;
        }
        int n = nums.size() - 1;
        int left = 0,right = n;
        int val = nums[0];

        int Sub1End = getEnd(nums,val,0,nums.size()-1);

        left = 0;
        right = Sub1End;
        int found = BinarySearch(nums,target,left,right);
        if(found != -1) {
          return found;
        }

        left = Sub1End+1;
        right = nums.size() - 1;
        found = BinarySearch(nums,target,left,right);

        return found;
    }
};
