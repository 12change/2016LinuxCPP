bool IsPrime(int a){
	for (int i = 2; i < a/2+1; ++i)
	{
		if (a%i==0)
		{
			return false;
		}
	}
	return true;
}
