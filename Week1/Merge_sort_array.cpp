void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = nums1.size()-1;
        int temp=0;
        m--;
        n--;
        while(n>=0){
            while(m>=0&&nums1[m]>nums2[n]){
                        temp = nums1[len];
                        nums1[len--] = nums1[m];
                        nums1[m--]=temp;

                    }

            nums1[len--] = nums2[n--];

        }


    }