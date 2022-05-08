class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
    if (nums.size() <= 2 )
        return 0;
    int count=0,max=0;
    if(abs( nums[0] +  nums[1]) == nums[2])
        count =2;
    for (int i=2;i<nums.size() ;i++ ) {
        if(nums[i] == nums[i-1]+ (nums[i-1] -  nums[i-2])){
            if(count ==0)
                count=3;
            else
            count++;
        }else{
        for (int i = 3; i <= count; i++) {
            max += abs(count - i) + 1;
            //   cout <<count<<endl;
        }
            count=0;
        }

    }
    if(count != 0){
        for (int i = 3; i <= count; i++) {
            max += abs(count - i) + 1;
            //   cout <<count<<endl;
        }
    }
        return max;
    }
};