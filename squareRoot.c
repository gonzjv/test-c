/* ### Write your code below this line ### */

float SquareRoot(float number)
	{
    	float sqrt = number / 2, temp = 0;
    	while(sqrt != temp)
        {
           	temp = sqrt;
    		sqrt = (sqrt + number/sqrt) / 2;
        }
    	
    	return sqrt;
	}