int romanToInt(char* s) 
{
	int i=0, sum=0;
	char c0=0, c1=0;
	
	while (*(s+i) != '\0')
	{
		c0 = *(s+i);
		c1 = *(s+i+1);
		
		if( c0=='I' && ( c1=='V' || c1=='X') )	// IV-VI = IX-XI = -2
			sum = sum -2;
		else if( c0=='X' && ( c1=='L' || c1=='C') )	// XL-LX = XC-CX = -20
				sum = sum -20;
			else if( c0=='C' && ( c1=='D' || c1=='M') )	// CD-DC = CM-MC = -200
				sum = sum -200;
		
		switch(c0)
		{
			case 'I':
				sum = sum + 1;
				break;
			case 'V':
				sum = sum + 5;
				break;	
			case 'X':
				sum = sum + 10;
				break;
			case 'L':
				sum = sum + 50;
				break;	
			case 'C':
				sum = sum + 100;
				break;
			case 'D':
				sum = sum + 500;
				break;	
			case 'M':
				sum = sum + 1000;
				break;
			default:
				break;
		}
		i++;
	}
    
	return sum;
}