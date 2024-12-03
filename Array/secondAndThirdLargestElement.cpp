class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int firstMaxi = arr[0];
        int secondMaxi = INT_MIN;
        if(arr.size() == 1) return -1;
        for(int i =0;i<arr.size();i++){
            if(arr[i] > firstMaxi){
                secondMaxi = firstMaxi;
                firstMaxi = arr[i];
            }else if(arr[i] > secondMaxi && arr[i] != firstMaxi){
                secondMaxi = arr[i];
            }
        }
        if(secondMaxi == INT_MIN){
            return -1;
            
        }
        return secondMaxi;
    }
};
