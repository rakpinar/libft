#include <stdio.h>
#include "stdlib.h"
#include "libft.h"
#include <fcntl.h>
int main()


//strlen
// {
//     char *str =(char *)malloc(5*sizeof(char));
//     str = "harun";
//     printf("%zu\n", ft_strlen(str));
// }

//memset
// {
//     char dizi[] = "tanekarabiber";
//     ft_memset(dizi, 'x', 4);
//     printf(" Yeni dizi: %s\n",dizi );
// }

//bzero
// {
//     char dizi[] = "Rumeysa";
//     ft_bzero(dizi, 1);
//     printf("Yeni dizi: %s\n", dizi);
// }

// //memcpy
// {
    // char src[] = "RumeysaNur";
    // char dst[9];
    // ft_memcpy(dst, src, 8);
    // printf("%s\n", dst);
// }

//memmove
// {
//     char src[10] = "RumeysaNur";
//     char dst[9];
//     ft_memmove(dst, src, 6);
//     printf("%s\n",dst);
// }

//strlcpy
// {
//     char src[] = "RumeysaNur";
//     char dst[20];
//     ft_strlcpy(dst, src, 4);
//     printf("%ld\n", ft_strlen(src));
//     printf("%ld\n", ft_strlen(dst));
//     printf("%s\n", dst);
// }

// //strlcat
// {
//     char src[] = "RumeysaNur";
//     char dst[] = "01";
//     printf("src len1: %zu\n", ft_strlen(src));
//     printf("returned: %zu\n",ft_strlcat(dst, src, 4));
//     printf("src len2: %zu\n", ft_strlen(src));//??????????????????
//     printf("dst len: %zu\n", ft_strlen(dst));
//     printf("dst: %s\n", dst);
//  }

// //toupper
// {
//     printf("%c\n", ft_toupper(100));
// }

//tolower
// {
//     printf("%c\n", ft_tolower(100));
// }

//strrchar
// {
//     const char dizi[] = "Akpinar";
//     printf("%s\n", ft_strrchr(dizi, 'p'));
// }

//strncmp
// {
//     const char dizi[] = "Aksemsettin";
//     const char dizi1[] = "Akpinar";
//     printf("%d\n", ft_strncmp(dizi, dizi1, 3));
// }

//memchr
// {
//     const char dizi[] = "Akpinar";
//     printf("%s\n", ft_memchr(dizi, 'p', 7));
// }

//memcmp
// {
//     const char dizi[] = "Bilgisayar";
//     const char dizi1[] = "Bilgiler";
//     printf("%d\n", ft_memcmp(dizi, dizi1, 6));
// }

//strnstr
// {
//     const char dizi[] = "kucukelma";
//     const char dizi1[] = "el";
//     printf("%s\n", ft_strnstr(dizi, dizi1, 9));
// }

//atoi
// {
//     printf("%d\n", ft_atoi("      	-48"));
// }

// strdup
//char *s = "harun"
//printf("%s",strdup(s));

//substr
// {
//     char dizi[] = "HelloWord";
//     char *dizi1;
//     printf("%s\n", ft_substr(dizi, 2, 5));
// }

//strjoin
// {
//     const char dizi[] = "Rumeysa+Nur";
//     const char dizi1[] = "Akpinar";
//     printf("%s\n", ft_strjoin(dizi, dizi1));
// }

// //strtrim
// {
//     const char dizi[] = "......c..Rumeysa....";
//     printf("%s\n", ft_strtrim(dizi, "."));
// }

//split
// {
//     char **a;
//     a = ft_split("ek.ler", '.');
//     printf("%s\n", *a);
//     printf("%s\n", a[0]);
//     printf("%s\n", a[1]);
// }

// //itoa
// {
//     printf("%s\n", ft_itoa(43));
// }


//mapi
// char rumey2(unsigned int i, char b)
//  {
//      printf("%c\n", b);
//  }
// int main()
// {
//      ft_strmapi("rumeysa", rumey2);
// }

//iteri
// void rumey2(unsigned int i, char *b)
//  {
//      printf("%s\n", b);
//  }
// int main()
// {
//      ft_striteri("rumeysa", rumey2);
// }


// //putchar
// {
// 	char karakter = 'a';
// 	int fd = open("open.txt", O_CREAT | O_WRONLY, 0644);
// 	ft_putchar_fd(karakter, fd);
// }

//putstr
// {
//     char dizi[] = "Rumeysa";
//     char dizi1[] = "Akpinar";
//     int fd = open("denme.txt", O_CREAT | O_WRONLY, 0644);
//     ft_putstr_fd(dizi, fd);
//     ft_putstr_fd(dizi1, fd);
// }

//putendl
// {
//     char dizi[] = "Rumeysa";
//     char dizi1[] = "Akpinar";
//     int fd = open("deneme.txt", O_CREAT | O_WRONLY, 0644);
//     ft_putendl_fd(dizi, fd);
//     ft_putendl_fd(dizi1, fd);
// }

//putnbr
// {
//     int fd = open("denme.txt", O_CREAT | O_WRONLY, 0644);
//     ft_putnbr_fd(123, fd);
//     printf("%d\n", fd);
// }
