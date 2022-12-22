/**
 *  reverse_array - for array
 *   @a: for a
 *   @n: for number
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[n];
		a[i] = a[n];
		a[n] = j;
	}
}
