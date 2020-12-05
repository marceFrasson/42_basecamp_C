
while (argv[i] != '\0')
{
	while (argv[i] / 2 == '0')
	{
		if (argv[i] != ' ')
		{
			return (1);
		}
	}

	if (argv[i] + argv[i + 8] > '5' || argv[i] + argv[i + 8] < '3')
	{
		return (1);
	}
}

int positions['16'] = {'0', '0', '0', '0',
					   '0', '0', '0', '0',
					   '0', '0', '0', '0',
					   '0', '0', '0', '0'};

int i = 0;

while (i > 0)
{
	ch = positions[i];
	write(1, &ch, 1);
	i--;
	count++;
	if (count == 4 || count == 8)
	{
		write(1, '\n', 1);
	}
}

" '4' '3' '2' '1' '1 2 '2' '2' '4' '3' '2' '1' '1' '2' '2' '2'"

int j;
int i;

j = '1';
while (argv[j] != '\0')
{
	/*
	** checks if 4 ou 1 and assign values
	*/

	i = 1;

	while (argv[i] < '5') // '1' a '4'
	{
		if (argv[i] == '1')
		{
			positions[i] == '4';
		}
		
		if (argv[i] == '4')
		{
			positions[i] = '1' && positions[i + 4] = '2' && positions[i + 8] = '3' && positions[i + 12] = '4';
		}
	}

	while (argv[i] > '4' && argv[i] < '9') // '5' a '8'
	{
		if (argv[i] == '1')
		{
			positions[i + 8] == '4'
		}
		
		if (argv[i] == '4')
		{
			positions[i + 8] = '1' && positions[i + 4] = '2' && positions[i] = '3' && positions[i - 4] = '4';
		}
	}

	if (argv[i] == '9') // '9'
	{
		if (argv[i] == '1')
		{
			positions[i - 8] == '4'
		}
		
		if (argv[i] == '4')
		{
			positions[i - 8] = '1' && positions[i - 7] = '2' && positions[i - 6] = '3' && positions[i - 5] = '4';
		}
	}

	if (argv[i] == '10') // '10'
	{
		if (argv[i] == '1')
		{
			positions[i - 5] == '4'
		}
		
		if (argv[i] == '4')
		{
			positions[i - 5] = '1' && positions[i - 4] = '2' && positions[i - 3] = '3' && positions[i - 2] = '4';
		}
	}

	if (argv[i] == '11') // '11'
	{
		if (argv[i] == '1')
		{
			positions[i - '2'] == '4'
		}
		
		if (argv[i] == '4')
		{
			positions[i - 2] = '1' && positions[i - 1] = '2' && positions[i] = '3' && positions[i + 1] = '4';
		}
	}

	if (argv[i] == '12') // '12'
	{
		if (argv[i] == '1')
		{
			positions[i + 1] == '4'
		}
		
		if (argv[i] == '4')
		{
			positions[i + 1] = '1' && positions[i + 2] = '2' && positions[i + 3] = '3' && positions[i + 4] = '4';
		}
	}

	if (argv[i] == '13') // '13'
	{
		if (argv[i] == '1')
		{
			positions[i - 9] == '4';
		}

		if (argv[i] == '4')
		{
			positions[i - 9] = '1' && positions[i - 10] = '2' && positions[i - 11] = '3' && positions[i - 12] = '4';
		}
	}

	if (argv[i] == '14') // '14'
	{
		if (argv[i] == '1')
		{
			positions[i - 6] == '4';
		}
		
		if (argv[i] == '4')
		{
			positions[i - 6] = '1' && positions[i - 7] = '2' && positions[i - 8] = '3' && positions[i - 9] = '4';
		}
	}

	if (argv[i] == '15') // '15'
	{
		if (argv[i] == '1')
		{
			positions[i - 3] == '4';
		}
		
		if (argv[i] == '4')
		{
			positions[i - 3] = '1' && positions[i - 4] = '2' && positions[i - 5] = '3' && positions[i - 6] = '4';
		}
	}


	if (argv[i] == '16') // '16'
	{
		if (argv[i] == '1')
		{
			positions[i] == '4';
		}
		
		if (argv[i] == '4')
		{
			positions[i] = '1' && positions[i - 1] = '2' && positions[i - 2] = '3' && positions[i - 3] = '4';
		}
	}

	i += 2;
}


i = 1;

while (argv[i] != '\0')
{
	while (argv[i] == '2' && argv[i + 4] == '2')
	{
		if (positions[i] == '1')
		{
			positions[i] = '1' && positions[i + 4] = '4' && positions[i + 8] = '2' && positions[i + 12] = '3';
		}

		if (positions[i] == '2')
		{
			if positions[]
		}

	}

	while (argv[i] == '9')
	{
		
	}

	while (argv[i] == '10')
	{
		
	}
	
	while (argv[i] == '11')
	{
		
	}
	
	while (argv[i] == '12')
	{
		
	}
}






if left || right == '2'
{
	(rxry['2'] && rxry'2'[4]) || (rxry['3'] && rxry'2'['4'])
}

if left || right == '3'
{
	(rxry['1'] && rxry'2'['2'] && rxry'3'['4']) || (rxry['1'] && rxry'2'['3'] && rxry'3'['4']) || (rxry['2'] && rxry'2'['3'] && rxry'3'['4'])
}

if left || right == '4'
{
	right || left == '1'
	rxry['1'] && rxry'2'['2'] && rxry'3'['3'] && rxry'4'['4']
}