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
    fgets(distro_name, 100, fp);
    strcpy(distro_name, distro_name +5);
    distro_name[strcspn(distro_name, "\r\n")] = 0;
    distro_name[strlen(distro_name) ] = 0;
    fclose(fp);

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
    fgets(uptime, 100, fp);
    uptime[strcspn(uptime, "\r\n")] = 0;
    pclose(fp);
    return uptime;
}

// detects the version of the shell in use and returns it as a string
char *get_shell_version()
{
    char *shell_version = malloc(sizeof(char) * 100);
    FILE *fp = popen("sh --version", "r");
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
    screen_resolution[strcspn(screen_resolution, "\r\n")] = 0;
    pclose(fp);
    return screen_resolution;
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
            strcpy(disk_usage, line);
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
        if (strstr(line, "VGA") != NULL)
        {
            strcpy(gpu_name, line+8);
            break;
        }
    }
    gpu_name[strcspn(gpu_name, "\r\n")] = 0;
    pclose(fp);
    return gpu_name;
}

// gets the memory usage of the system and returns it as a string
char *get_ram_usage() {
    char *ram_usage = (char *) malloc(sizeof(char) * 100);
    FILE *fp = popen("free -m", "r");
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    while ((read = getline(&line, &len, fp)) != -1) {
        if (strstr(line, "Mem") != NULL) {
            strcpy(ram_usage, line);
            break;
        }
    }
    ram_usage[strcspn(ram_usage, "\r\n")] = 0;
    pclose(fp);
    return ram_usage;
}




//detect the active user and returns it as a string
char *detect_user()
{
    char *user = (char *)malloc(sizeof(char) * 100);
    FILE *fp = popen("whoami", "r");
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    while ((read = getline(&line, &len, fp)) != -1)
    {
        if (strstr(line, "whoami") != NULL)
        {
            strcpy(user, line);
            break;
        }
    }
    user[strcspn(user, "\r\n")] = 0;
    pclose(fp);
    return user;
}

//get_hostname returns the hostname of the system and returns it as a string

char *get_host(){
    char *host = (char *)malloc(sizeof(char) * 100);
    FILE *fp = popen("hostname", "r");
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    while ((read = getline(&line, &len, fp)) != -1)
    {
        if (strstr(line, "hostname") != NULL)
        {
            strcpy(host, line);
            break;
        }
    }
    host[strcspn(host, "\r\n")] = 0;
    pclose(fp);
    return host;


}