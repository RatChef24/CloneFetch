#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <sys/statvfs.h>
#include <string.h>

#include "fetch.h"
#include "logos.h"
#include "util.h"
#include "display.h"

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_RESET "\x1b[0m"

char **get_logo(char *distro_name)
{
    if (!strcmp(distro_name, "Ubuntu"))
        return ubuntu_logo;
    else if (!strcmp(distro_name, "Mint"))
        return mint_logo;
    else if (!strcmp(distro_name, "EndeavourOS") || !strcmp(distro_name, "Arch"))
        return arch_logo;
    else if (!strcmp(distro_name, "Linux Mint"))
        return mint_logo;
    else return linux_logo;

    return NULL;
}

int main(int argc, char *argv[])
{

    char **logo = NULL;

    if (argc > 1)
        logo = get_logo(argv[1]);
    else
        logo = get_logo(get_distro_name());

    if (logo == NULL)
        return 1;

    display_info(logo);

    return 0;
}
