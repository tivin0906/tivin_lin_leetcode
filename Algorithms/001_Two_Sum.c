/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) 
{
    int i=0, j=0;
    int *returnNum = (int *)malloc(2*sizeof(int));

    for(i=0; i<numsSize; i++)
    {
        for(j=i+1; j<numsSize; j++)
        {
            if(*(nums+i)+*(nums+j)==target)
            {
                *returnNum=i;
                *(returnNum+1)=j;
                break;
            }
        }
    }
     return returnNum;
}