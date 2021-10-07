void	put_three_digits(int nombre, char *dict)
{
	spell_number(nombre/100, dict);
	write(1, " hundred ", 9);
	nombre = nombre % 100;
	if ((nombre >= 10 && nombre <= 19) || (nombre > 0 && nombre < 10))
	{
		spell_number(nombre, dict);
		write(1, " ", 1);
	}
	else if (nombre > 19)
	{
		spell_number(nombre/10*10, dict);
		write(1, " ", 1);
		if ((nombre = nombre % 10) > 0)
		{
			spell_number(nombre, dict);
			write(1, " ", 1);
		}
	}
}
