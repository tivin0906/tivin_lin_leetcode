int searchInsert(int* nums, int numsSize, int target) 
{
    printf("nums=%d, numsSize=%d, target=%d", *nums, numsSize, target);
    
    int i=0, ret=0;
    
    for(i=0; i<numsSize; i++)
        if( *(nums+i) - target >= 0)
        {
            ret = i;
            break;
        }
        else
            ret = i+1;
        
    return ret;
}