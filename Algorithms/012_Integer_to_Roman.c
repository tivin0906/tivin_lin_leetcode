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

char* intToRoman(int num) 
{
    char RomanNumList[4][9][5] = { {"I","II","III","IV","V","VI","VII","VIII","IX"},
								   {"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
								   {"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
								   {"M","MM","MMM"} };
	
    // the length of an integer, e.g. 123 -> 3
    int d = ( num == 0 ? 1 : ((int)(log10(fabs(num))+1)) );
	
	int remainder=0, i=0, j=0;
	char tmp;
	
	// dynamically memory allocation
	char* RomanNum = (char *)malloc((4*d+1)*sizeof(char));
	
	while(num != 0)
    {
		i=0; 
		tmp='0';
		
		remainder = num / power(10,(d-1));
		
		if(remainder>0)
		{
    		while( tmp !='\0')
    		{
    			tmp = RomanNumList[d-1][remainder-1][i];
    			RomanNum[j] = tmp;
    			
    			i++; j++;
    		}
    		j--;
		}	
		num = num % power(10,(d-1));
		d--;
	}

    // printf("RomanNum：%s",RomanNum); 
    
	return RomanNum;
}
