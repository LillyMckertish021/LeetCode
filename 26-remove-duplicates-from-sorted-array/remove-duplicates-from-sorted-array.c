int removeDuplicates(int* nums, int numsSize) {

    if(numsSize <=1){
        return numsSize;
    }

    int write_idx = 1;
    for (int read_idx = 1;read_idx < numsSize; read_idx++){
        if(nums[read_idx] != nums[read_idx - 1]){
            nums[write_idx] = nums[read_idx];
            write_idx++;
        }


    }
    return write_idx;

}
    