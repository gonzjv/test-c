/* ### Write your code below this line ### */
#include <assert.h>
#include <stddef.h>

size_t length;

size_t StringLength(const char* str)
	{
		assert(str);
    	
    	length = 0;
    
    	while(str[length] != '\0')
        	{
        		length++;
        	}
        	
	   	return length;
	}