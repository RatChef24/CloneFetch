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
    if (!strcmp(distro_name, "\"Ubuntu Linux\"")  || !strcmp(distro_name, "\"Ubuntu\""))
        return ubuntu_logo;
    else if (!strcmp(distro_name, "Mint") || !strcmp(distro_name, "Linux Mint"))
        return mint_logo;
    else if (!strcmp(distro_name, "EndeavourOS") || !strcmp(distro_name, "Arch"))
        return arch_logo;
    else if (!strcmp(distro_name, "Debian GNU/Linux") || !strcmp(distro_name, "Debian")|| !strcmp(distro_name, "Debian Linux"))
        return debian_logo;
    else if (!strcmp(distro_name, "elementary OS"))
        return elementaryos_logo;
    else if (!strcmp(distro_name, "\"Fedora Linux\""))
        return fedora_logo;
    else if (!strcmp(distro_name, "Gentoo"))
        return gentoo_logo;
    else if (!strcmp(distro_name, "Kali") || !strcmp(distro_name, "Kali Linux"))
        return kalilinux_logo;
    else if (!strcmp(distro_name, "Manjaro Linux") || !strcmp(distro_name,"Manjaro"))
        return manjaro_logo;
    else if (!strcmp(distro_name, "openSUSE") || !strcmp(distro_name, "openSUSE Leap") || !strcmp(distro_name, "openSUSE"))
        return opensuse_logo;
    else if (!strcmp(distro_name, "Red Hat Enterprise Linux") || (!strcmp(distro_name, "Red Hat Enterprise Linux Server")) || (!strcmp(distro_name, "Red Hat")))
        return redhat_logo;
    else if (!strcmp(distro_name, "Scientific Linux") || (!strcmp(distro_name, "Scientific")))
        return scientificlinux_logo;
    else if (!strcmp(distro_name, "Slackware"))
        return slackware_logo;

    else return linux_logo;


}

int main(int argc, char *argv[])
{



    char **logo = NULL;
    char *arg = NULL;
    char *arg2 = NULL;

    if (argc > 1){
        arg = argv[1];
        arg2 = argv[2];



    }


    else
        arg = get_distro_name();
        logo = get_logo(arg);

    if (logo == NULL)
        return 1;




        display_info(logo,arg);







    return 0;
    }






