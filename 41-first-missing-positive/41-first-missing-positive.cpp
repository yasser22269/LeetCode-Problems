class Solution {
public:
    map<long long , int>arr;
    long long number = 0;
    int firstMissingPositive(vector<int>& nums) {
       long long maxx = *max_element(nums.begin(),nums.end());
        for (int i=0;i<nums.size() ;i++ ){
                arr[nums[i]]=1;
        }
        if(maxx<=0)
            return 1;
        for(int i=1;i<=maxx;i++){
            if(arr[i] != 1){
                number = i;
                break;
            }

        }
        if(number != 0)
            return number;
        else
            return maxx+1;
    }
};