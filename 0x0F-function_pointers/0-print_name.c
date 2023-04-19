/**
 * print_name - prints name.
 * @name: parameter
 * @f: function pointer
 * Return: Always zero.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
