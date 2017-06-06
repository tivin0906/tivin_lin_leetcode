char* longestCommonPrefix(char** strs, int strsSize) 
{
    if(strsSize == 0)
        return "";
	
	int i=0, j=0;	
 	char* ret = strs[0];
	
	for(i=1; i<strsSize; i++)
	{
	    j=0;
	    		
		while( ret[j] == strs[i][j] && strs[i][j] != '\0')
			j++;
			
		ret[j] = '\0';
	}
	
	return ret;
}