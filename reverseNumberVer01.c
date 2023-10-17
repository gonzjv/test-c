unsigned ReverseNumber(unsigned number)
{
    unsigned ones_digit, tens_digit, hundreds_digit, result;

    /* ### Write your code below this line ### */
    /* ones_digit = ...
     * tens_digit = ...
     * hundreds_digit = ... */
    ones_digit = number % 10;
    tens_digit = (number % 100) / 10;
	hundreds_digit = number / 100;
        
    result = ones_digit * 100 + tens_digit * 10 + hundreds_digit;

    return result;
}
