 
void Delay_1ms(unsigned int value)
{
	unsigned int i,j;
	for(i=0;  i<value;  i++)
	{
		for(j=0;  j<110;  j++)
		{
			;
		}
	}
}

void Delay_1Sec(unsigned int sec)
{
	unsigned int i;
	for(i =0;  i<sec; i++)
	{
		Delay_1ms(1000);
	}
}

	