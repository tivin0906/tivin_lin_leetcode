int power(int x, int num)
{
    int i=0, result=1;
    
    if(num == 0)
        result = 1;
    else
        for(i=0; i<num; i++)
            result = result*x;
            
    return result;
}

int reverse(int x) 
{   
    int i=1, sum=0, tmp=x;
    
    // the length of an integer, e.g. 123 -> 3
    int d = ( x == 0 ? 1 : ((int)(log10(fabs(x))+1)) );

    while(x != 0)
    {
        sum = sum+(x%10)*power(10,(d-i));
        x = x/10;
        i++;
    }
    
    // check result is overflow or not
	sum = ( (tmp%10) == (sum/power(10,(d-1))) ? sum : 0 );  
	
    return sum;
}

bool isPalindrome(int x)
{
    if(x<0)
        return false;
        
	int revx;
    revx = reverse(x);

	if(x == revx)
		return true;
	else
		return false;
}