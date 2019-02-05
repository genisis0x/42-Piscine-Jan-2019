/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bbq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 19:27:33 by bchapman          #+#    #+#             */
/*   Updated: 2019/01/29 18:02:11 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include "bbq.h"

int     validate_line_count(char argv[1], int k);
int     validate_line_length(char argv[1]);
void    initialize_variables(int k, char argv[1]);
void    valid_character_map(char box, char obst, char empty, char argv[1]);
int     open_file(char argv[1]);
int     first_line_character_count(char argv[1]);
void    create_initial_array(int l, int w, char argv[1]);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int		bbq(char **argv)
{
    int     k;
    int     l;
    int     w;

    k = 0;
    k = first_line_character_count(argv[1]);
    initialize_variables(k, argv[1]);
    w = validate_line_length(argv[1]);
    l = validate_line_count(argv[1], k);
    printf("width is %d\n length is %d\n", w, l);
    /* malloc is l * w + 1 */
    /* fixed size of array is l + w */
    create_initial_array(l, w, argv[1]);
    return (0);
}

void    create_initial_array(int l, int w, char argv[1])
{
    int fd;
    char arr[l+w];
    int i;
    char buf[1];
    char first[2];

    i = 0;
    printf("size of array is %d", l+w);
    fd = open_file(argv);
    open_file(argv);
    while ((read(fd, buf, 1)) != '\0')
        if (buf[0] == '\n')
            break;
    while ((read(fd, buf, 1)) != '\0')
        if (buf[0] != '\n')
            arr[i++] = buf[0];
        else
            break;
    arr[i++] = '\n';
    while ((read(fd, first, 2)) != '\0')
        if (first[0] == '\n')
        {
            arr[i++] = first[1];
            arr[i++] = first[1];
        }
}

void     valid_character_map(char box, char obst, char empty, char argv[1])
{
    int fd;
    char buf[1];
    fd = open_file(argv);
    open_file(argv);
    while ((read(fd, buf, 1)) != '\0')
        if (buf[0] == '\n')
            break;
    while ((read(fd, buf, 1)) != '\0')
        if (buf[0] != box && buf[0] != obst && buf[0] != empty && buf[0] != '\n')
            printf("not a valid map");
}

void    initialize_variables(int k, char argv[1])
{
    char box;
    char obst;
    char empty;
    int fd;
    char eof[k];
    
    fd = open_file(argv);
    open_file(argv);
    read(fd, eof, k--);
    box = eof[--k];
    obst = eof[--k];
    empty = eof[--k];
    close(fd);
    valid_character_map(box, obst, empty, argv);
}

int     open_file(char argv[1])
{
    int fd;
    fd = open(argv, O_RDWR, 0);
    return (fd);
}

int     first_line_character_count(char argv[1])
{
    int i;
    char buf[1];
    int fd;

    i = 0;
    fd = open(argv, O_RDWR, 0);
   while ((read(fd, buf, 1)) != '\0')
   {
       i++;
       if (buf[0] == '\n')
           break;
   }
    close(fd);
    return (i);
}


int    validate_line_count(char argv[1], int k)
{
    int i;
    char buf[1];
    int fd;

    i = 0;
    fd = open(argv, O_RDWR, 0);
    while ((read(fd, buf, 1)) != '\0')
     {
         if ((buf[0] >= '0') && (buf[0] <= '9'))
         {
             i *= 10;
             i += buf[0] - '0';
         }
         if (buf[0] == '\n')
             break;
     }
    k = 0;
    while ((read(fd, buf, 1)) != '\0')
    {
        if (buf[0] == '\n')
        {
            k++;
        }
    }
    close(fd);
    if (k != i)
        printf("lines don't match");
    return (k);
}

int     validate_line_length(char argv[1])
{
    int i;
    int j;
    int fd;
    char buf[1];
    
    fd = open(argv, O_RDWR, 0);
    j = 0;
    while ((read(fd, buf, 1)) != '\0')
        if (buf[0] == '\n')
            break;
    while ((read(fd, buf, 1)) != '\0')
    {
        j++;
        if (buf[0] == '\n')
            break;
    }   
    i = 0;
    while ((read(fd, buf, 1)) != '\0')
    {
        i++;
        if (buf[0] == '\n')
        {
            if ( i % j != 0)
            printf("not a valid line, bogus map");
        }
    }
    close(fd);
    return (j);
}

int		main(int argc, char **argv)
{

    t_list *stuff;
    stuff = (t_list*)malloc(sizeof(t_list));

    stuff->pos = 10;

    printf("\n%d\n", stuff->pos);


    //	while (argc > 1)
	//	{
			bbq(argv);
			argc--;
	//	}
	return (0);
}
