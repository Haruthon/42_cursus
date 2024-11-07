#include "libft.h"

static char	**free_array(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (NULL);
}

static int	count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*putword(char *word, char const *s, int i, int word_len)
{
	int	j;

	j = 0;
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**split_words(char const *s, char c, char **s2, int count)
{
	int	i;
	int	index;
	int	word_len;

	i = 0;
	index = 0;
	word_len = 0;
	while (index < count)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		s2[index] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!s2[index])
			return (free_array(s2, index));
		putword(s2[index], s, i, word_len);
		word_len = 0;
		index++;
	}
	s2[index] = NULL;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	count;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	s2 = (char **)malloc(sizeof(char *) * (count + 1));
	if (!s2)
		return (NULL);
	s2 = split_words(s, c, s2, count);
	return (s2);
}