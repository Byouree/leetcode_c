/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
 // num : 2
 // output : [0,1,1]
 // num : 5
 // output : [0, 1, 1, 2, 1, 2]
 // 0: 00000000 00000000 00000000 00000000 = 0
 // 1: 00000000 00000000 00000000 00000001 = 1
 // 2: 00000000 00000000 00000000 00000010 = 1
 // 3: 00000000 00000000 00000000 00000011 = 2
 // 4: 00000000 00000000 00000000 00000100 = 1
 // 5: 00000000 00000000 00000000 00000101 = 2
int* countBits(int n, int* returnSize){
    int* ret = (int*)malloc(sizeof(int)*(n+1));
    *returnSize = n+1;
    // i:         0?xxxxxx xxxxxxxx xxxxxxxx xxxxxxxx
    //             &
    // mask:      01000000 00000000 00000000 00000000
    // 1 << 30
    // i & mask ==0?000000 00000000 00000000 00000000
    // i & mask > 0 => ? == 1
    // i & mask ==0 => ? == 0
    for (int i=0; i <=n; i++){
        int count = 0;
        for (int offset = 30; offset >=0; offset--) {
            int mask = 1 << offset;
            if ((i&mask)>0) {
                count++;
            }
        }
        ret[i] = count;
    }

    return ret;
}
