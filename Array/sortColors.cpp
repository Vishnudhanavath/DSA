class Solution {
public:
    void sortColors(vector<int>& nums) {
        int freq[3] = {0};
        // int n = nums.size();
        // for(int i =0;i<n;i++){
        //     freq[nums[i]] ++;
        // }
        // int k =0;
        // for(int i=0;i<3;i++){
        //     for(int j =0;j<freq[i];j++){
        //         nums[k]=i;
        //         k++;
        //     }
        // }   
        int l = 0,mid =0,h = nums.size()-1;
        while(mid <= h){
            if(nums[mid] == 0){
                swap(nums[l],nums[mid]);
                l++;
                mid++;
            }else if(nums[mid] == 1){
                mid++;
            }else{
                swap(nums[mid],nums[h]);
                h--;
            }
        }
        
    }
};
