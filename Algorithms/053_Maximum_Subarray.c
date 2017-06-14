int maxSubArray(int* nums, int numsSize) 
{
    int i=0, sum=0, ret=*nums;
    
    for(i=0; i<numsSize; i++)
    {
        if( (sum + *(nums+i)) > 0 )
        {
            sum = sum + *(nums+i);
            
            if(sum > ret)
                ret = sum;
        }
        else
            sum = 0;
    }
    
	// if all elements are negative or zero.
    for(i=0; i<numsSize; i++)
        if( *(nums+i) > ret )
            ret = *(nums+i);
    
    return ret;
}


/*
// higher complexity but more intuitive method.
	
int maxSubArray(int* nums, int numsSize) 
{
    int i=0, sum=0, ret=*nums;
    
    for(i=0; i<numsSize; i++)
    {
        sum=0;
        
        for(j=i; j<numsSize; j++)
        {
            sum = sum + *(nums+j);
            
            if(sum > ret)
                ret = sum;
        }
		
	return ret;
}
*/