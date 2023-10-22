/* ### Write your code below this line ### */
static float getDiffAbsolute(float x, float y)
	{
		return x > y ? x - y : y - x; 
	}

int IsRightTriangle(float a, float b, float c)
	{
		int result = 0;
    	#define EPSILON 0.05
    
    	a > b && a > c && getDiffAbsolute(a*a, b*b + c*c) < EPSILON && (result = 1);
		b > a && b > c && getDiffAbsolute(b*b, a*a + c*c) < EPSILON && (result = 1);
    	c > b && c > a && getDiffAbsolute(c*c, b*b + a*a) < EPSILON && (result = 1);
    
    	return result;
	}
