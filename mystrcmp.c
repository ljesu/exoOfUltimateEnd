int mystrcmp(const char str1[], const char str2[])
{

	int i=0;
	while (str1[i]!='\0')
	{
	
	i=i+1;
	}


	int e=0;
	while (str2[e]!='\0')
	{
	e=e+1;
	}

return(i-e);
}


