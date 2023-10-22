unsigned Fibonacci(unsigned n)
    {
       	int i = 0, a = 0, b = 1, next = 0;
    	    
    	while(i != n +1)
        	{
            	if(i <= 1)
                    next = i;
           		else
                    {
                    next = a + b;
                    a = b;
                    b = next;
                    }
            	i++;
        	}
    
    	return next;
    }
