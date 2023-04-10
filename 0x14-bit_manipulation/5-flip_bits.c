/**
 * flip_bits - gets number of bits needed to flip
 * @n: how many bit flips are needed to equal m for n
 * @m: number to set other equal
 * Return: The number of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int yOR = (n ^ m);
	unsigned long int max = 0x01;

	while (max <= yOR)
	{
		if (max & yOR)
		{
			flips++;
		}

		max <<= 1;
	}
	return (flips);
}
