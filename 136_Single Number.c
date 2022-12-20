// nums = [2,2,1]
// nums = 2^2^1= 0^1 = 1
// nums = [4,1,2,1,2]
// nums = 4^1^2^1^2 => 1^1^2^2^4 => 0^0^4 => 4
int singleNumber(int* nums, int numsSize){
    int res = nums[0];
    for (int i=1; i < numsSize; i++){
        res ^= nums[i];        
    }
    return res;

}
