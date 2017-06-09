int removeElement(int* nums, int numsSize, int val)
{
    if(numsSize == 0)
        return 0;
        
	int i=0, ret=0;

    for(i=0; i<numsSize; i++)
	{
		if(nums[i] != val)
		{
			nums[ret] = nums[i];
			ret++;
		}
	}
	
	return ret;
}