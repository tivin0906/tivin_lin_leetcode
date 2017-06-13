int strStr(char* haystack, char* needle) 
{
    int i=0, j=0, ret=0;
    
    while( haystack[i] !='\0' && needle[j] != '\0' )
    {
        if( haystack[i] == needle[j] )
		{	
		    i++;
		    j++;
		}
		else
		{
		    i=i-j+1; 
		    j=0;
		}
    }

	ret = ( (haystack[i] == '\0' && needle[j] != '\0') ? -1 : (i-j));
		
    return ret;
}