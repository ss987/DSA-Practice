void sortColors(vector<int>& nums) {
        //0 to low-1 -> 0
        //low to mid-1 -> 1
        //mid to high ->unsorted
        //high+1 to end ->2
        int n=nums.size(),mid=0,low=0;
        int high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                nums[mid]=nums[low];
                nums[low]=0;
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                nums[mid]=nums[high];
                nums[high]=2;
                high--;
            }
        }
    }
