int missingNumber(int* nums, int numsSize){
    int res = 0, sumExt = 0, sumAct=0;
    for (int i=0; i <= numsSize; i++) {
        sumExt += i;        
    }

    for (int j=0; j<numsSize; j++){
        sumAct += nums[j];
    }

    res = sumExt-sumAct;
    return res;
}

int missingNumber(int* nums, int numsSize){
    int x1=nums[0];
    int x2=0;
    int res;
    for (int i=1; i<numsSize;i++){
        x1 ^= nums[i];
    }

    for (int i=1; i <=numsSize;i++){
        x2 ^= i;
    }
    res = x1^x2;
    return res;
}
