int removeDuplicates(int* nums, int numsSize) 
{
    if(numsSize == 0)
        return 0;
        
	int i=0, ret=0;

    for(i=0; i<numsSize-1; i++)
	{
		if(nums[i] != nums[i+1])
		{
			ret++;
			nums[ret] = nums[i+1];
		}
	}
	ret++;
	
	return ret;
}