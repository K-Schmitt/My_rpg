/*
** EPITECH PROJECT, 2023
** rpg
** File description:
** tools2
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "../../include/csfmlib.h"
#include "../../include/define.h"

static off_t get_file_size(const char *str)
{
    struct stat stats;

    if (stat(str, &stats) == -1) {
        if (write(2, "Can't get file size\n", 20) == -1)
            return (-1);
        return (-1);
    }
    return (stats.st_size);
}

static char *open_read(const char *str, const off_t size)
{
    int folder = 0;
    int read_size = 0;
    if ((folder = open(str, O_RDONLY)) == -1) {
        if (write(2, "Can't open file\n", 16) == -1)
            return (NULL);
        return (NULL);
    }
    char *buffer = malloc(sizeof(char) * (size + 1));
    if ((buffer == NULL) || (read_size = read(folder, buffer, size)) == -1) {
        if (write(2, "Can't read file\n", 16) == -1)
            return (NULL);
        return (NULL);
    }
    if (close(folder) == -1) {
        if (write(2, "Can't close file\n", 17) == -1)
            return (NULL);
        return (NULL);
    }
    buffer[read_size] = '\0';
    return (buffer);
}

int make_save(RPG *rpg)
{
    off_t size = 0;
    char *buffer = NULL;
    rpg->saves.path = malloc(sizeof(char) * 17);
    if (rpg->saves.option == 1)
        rpg->saves.path = "./save/save1.txt";
    else if (rpg->saves.option == 2)
        rpg->saves.path = "./save/save2.txt";
    else
        rpg->saves.path = "./save/save3.txt";
    if ((size = get_file_size(rpg->saves.path)) == -1)
        return (-1);
    if ((buffer = open_read(rpg->saves.path, size)) == NULL)
        return (-1);
    rpg->saves.file = my_str_to_word_array(buffer);
    free (buffer);
    return (0);
}

char *make_book(char *path)
{
    off_t size = 0;
    char *buffer = NULL;
    if ((size = get_file_size(path)) == -1)
        return (NULL);
    if ((buffer = open_read(path, size)) == NULL)
        return (NULL);
    return (buffer);
}
