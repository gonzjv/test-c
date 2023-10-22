typedef unsigned long unLongT;

int IsPrimeNumber(unLongT num)
{
	int i;
	for (i = 2; (i * i) <= num; i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}