/**
 * hash_djb2 - djb2 algorithm
 * @str: string used to generate hash value
 * Description: multiplies `hash` by 33 then adds int
 * value of char `c`
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c = 0;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
