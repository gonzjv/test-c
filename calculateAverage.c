/* ### Write your code below this line ### */
#include <stddef.h>
int CalculateAverage(const int array[], size_t size)
	{
		long sum = 0;
    	int i = 0, average;
    	    	
    	if(size == 0)
            return 0;
    
    	do
            sum += array[i++];
    	while(i != size);
    
    	average = (int)((float)sum / size + 0.5);
    	return average;
	}