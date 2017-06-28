void merge(int* nums1, int m, int* nums2, int n) 
{
    int i=(m+n-1), j=(m-1), k=(n-1);
 
    if(m==0)
    {
        while(k>=0)
            nums1[i--] = nums2[k--];
    }
    
    while(k>=0 && j>=0)
    {
        if(nums1[j] > nums2[k])
            nums1[i--] = nums1[j--];
        else
            nums1[i--] = nums2[k--];
    }
    
    if(j<=0)
    {
        while(k>=0)
            nums1[i--]=nums2[k--];
    }
}
