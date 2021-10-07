void	put_two_digits(int nombre, char *dict)
{
	nombre = nombre % 100;
	if (nombre >= 10 && nombre <= 19)
	{
		spell_number(nombre, dict); // argv[?] a adater pour le nombre d'arg donne
		write(1, " ", 1);
	}
	else if (nombre > 19)
	{
		nombre = nombre / 10;
		spell_number(nombre * 10, dict); // argv[?] a adater pour le nombre d'arg donne
		write(1, " ", 1);
		if ((nombre = nombre % 10) > 0)
		{
			spell_number(nombre, dict); // argv[?] a adater pour le nombre d'arg donne
			write(1, " ", 1);
		}
	}
}
