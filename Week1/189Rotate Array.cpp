void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        vector<int> nums_(len);
        for(int i=0;i<len;++i){
            nums_[(i+k)%len]=nums[i];
        }
        nums=nums_;
    }