//
// Created by ratchef on 10/08/22.
//

#include "fetch.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include "string.h"



// detects the name of the linux distribution in use and returns it as a string
char *get_distro_name()
{
    char *distro_name = malloc(sizeof(char) * 100);
    FILE *fp = fopen("/etc/os-release", "r");
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    //return the value of the line that starts with NAME=, this is used because in debian based linux
    //the os-release file is different
    while ((read = getline(&line, &len, fp)) != -1)
    {
        if (strncmp(line, "NAME=", 5) == 0)
        {
            strcpy(distro_name, line + 5);
            break;
        }
    }

    distro_name[strcspn(distro_name, "\r\n")] = 0;
    return distro_name;
}


// detects the version of the kernel in use and returns it as a string
char *get_kernel_version()
{
    char *kernel_version = malloc(sizeof(char) * 100);
    FILE *fp = popen("uname -r", "r");
    fgets(kernel_version, 100, fp);
    kernel_version[strcspn(kernel_version, "\r\n")] = 0;
    pclose(fp);
    return kernel_version;
}

// detects tbe uptime of the system and returns it as a string
char *get_uptime()
{
    char *uptime = malloc(sizeof(char) * 100);
    FILE *fp = popen("uptime", "r");
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    while (read = getline(&line, &len, fp) != -1)
    {
        //remove some useless data from the line
        strcpy(uptime, line+13);
        uptime[strlen(uptime) -43] = '\0';
    }
    uptime[strcspn(uptime, "\r\n")] = 0;
    pclose(fp);
    return uptime;
}


//gets the number of packages installed in arch linux and returns it as a string
char *get_packages_installed()
{
    char *packages_installed = malloc(sizeof(char) * 100);
    if(!strcmp(get_distro_name(),"EndeavourOS") || !strcmp(get_distro_name(), "Arch Linux")) {
        FILE *fp = popen("pacman -Qq | wc -l", "r");
        fgets(packages_installed, 100, fp);
        packages_installed[strcspn(packages_installed, "\r\n")] = 0;
        pclose(fp);
    } else if (!strcmp(get_distro_name(),"Ubuntu") || !strcmp(get_distro_name(), "Linux Mint") || !strcmp(get_distro_name(), "Debian GNU/Linux") || !strcmp(get_distro_name(), "Kali GNU/Linux")) {
        FILE *fp = popen("dpkg -l | wc -l", "r");
        fgets(packages_installed, 100, fp);
        packages_installed[strcspn(packages_installed, "\r\n")] = 0;
        pclose(fp);
        // else copy to the packages_installed variable "Distro not supported"
    } else {
        strcpy(packages_installed, "Distro not supported");

    }



    return packages_installed;
}


// detects the version of the shell in use and returns it as a string
char *get_shell_version()
{
    char *shell_version = malloc(sizeof(char) * 100);
    FILE *fp = popen("echo \"$SHELL\"", "r");
    fgets(shell_version, 100, fp);
    shell_version[strcspn(shell_version, "\r\n")] = 0;
    pclose(fp);
    return shell_version;
}

// detects the resolution of the screen and returns it as a string
char *screen_resolution()
{
    char *screen_resolution = malloc(sizeof(char) * 100);
    FILE *fp = popen("xrandr | grep '*'", "r");
    fgets(screen_resolution, 100, fp);
    //remove the refresh rate from the string as it is not needed
    screen_resolution[strlen(screen_resolution) -10] = '\0';
    //remove the first 3 blank characters
    screen_resolution = screen_resolution+3;
    pclose(fp);
    return screen_resolution;
}


//detects the desktop environment in use and returns it as a string
char *get_desktop_environment()
{
    char *desktop_environment = malloc(sizeof(char) * 100);
    FILE *fp = popen("echo $XDG_CURRENT_DESKTOP", "r");
    fgets(desktop_environment, 100, fp);
    desktop_environment[strcspn(desktop_environment, "\r\n")] = 0;
    pclose(fp);
    return desktop_environment;
}



// detects the name of the cpu in use and returns it as a string
char *get_cpu_name()
{
    char *cpu_name = (char *)malloc(sizeof(char) * 100);
    FILE *cpuinfo = fopen("/proc/cpuinfo", "r");
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    while ((read = getline(&line, &len, cpuinfo)) != -1)
    {
        if (strstr(line, "model name") != NULL)
        {

            strcpy(cpu_name, line);

            break;
        }
    }
    cpu_name = cpu_name +13;
    cpu_name[strcspn(cpu_name, "\r\n")] = 0;
    fclose(cpuinfo);
    return cpu_name;
}

// gets the usage of the disk in use and returns it as a string
char *get_disk_usage()
{
    char *disk_usage = (char *)malloc(sizeof(char) * 100);
    FILE *fp = popen("df -h", "r");
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    while ((read = getline(&line, &len, fp)) != -1)
    {
        if (strstr(line, "/dev/sda1") != NULL)
        {
            strcpy(disk_usage, line+36);
            // remove the last character from the string
            disk_usage[strlen(disk_usage) -2] = '\0';

            break;
        }
    }
    disk_usage[strcspn(disk_usage, "\r\n")] = 0;
    pclose(fp);
    return disk_usage;
}

// gets the name of the gpu in use and returns it as a string
char *get_gpu_name()
{
    char *gpu_name = (char *)malloc(sizeof(char) * 100);
    FILE *fp = popen("lspci | grep VGA", "r");
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    while ((read = getline(&line, &len, fp)) != -1)
    {
        //skip some words
        strcpy(gpu_name, line+35);
        break;
    }
    gpu_name[strcspn(gpu_name, "\r\n")] = 0;
    pclose(fp);
    return gpu_name;
}

// gets the percentage of the memory usage of the system and returns it as a string
char *get_ram_usage(){
    char *ram_usage = (char *)malloc(sizeof(char) * 100);
    FILE *fp = popen("free -t | awk 'NR == 2 {printf(\"Current Memory Utilization is : %.2f%%\"), $3/$2*100}'", "r");
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    while ((read = getline(&line, &len, fp)) != -1)
    {
        if (strstr(line, "Current Memory Utilization is :") != NULL)
        {
            strcpy(ram_usage, line);
            break;
        }
    }
    pclose(fp);
    return ram_usage;
    }




//get_hostname returns the hostname of the system and returns it as a string

char *get_host(){
    char *host = (char *)malloc(sizeof(char) * 100);
    FILE *fp = popen("hostname", "r");
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    while ((read = getline(&line, &len, fp)) !=-1 )
    {
        strcpy(host, line);
    }
    host[strcspn(host, "\r\n")] = 0;
    pclose(fp);
    return host;
    }



