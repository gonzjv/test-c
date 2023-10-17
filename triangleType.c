int TriangleType(unsigned angleA, unsigned angleB)
{
    int result = 0;
 	(angleA == 90 || angleB == 90 || (angleA + angleB) == 90) && (result = 1);
    (angleA == angleB || angleA == (180 - angleB)) && (result = 2);
    ((angleA == 45 || angleA == 90) && (angleB == 45 || angleB == 90)) && (result = 3);
    (angleA + angleB) > 180 && (result = -1);
    
    return result;
    
}