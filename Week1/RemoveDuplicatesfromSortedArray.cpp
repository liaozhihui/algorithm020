//题号26, 删除排序数组中的重复项
int removeDuplicates(vector<int>& nums) {

         int low=0;
         int len = nums.size();
        if (len==0){
            return 0;
        }
         for(int i=0;i<len;++i){

             if(nums[low]!=nums[i]){
                 nums[low+1]=nums[i];
                 ++low;
             }

         }

        return low+1;



    }