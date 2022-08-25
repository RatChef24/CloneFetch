#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <sys/statvfs.h>
#include <string.h>

#include "fetch.h"

void display_info(char *logo[], char *arg)
{
    printf("\n");
    printf("\n");
    for (int i = 0; i < 18; i++)
    {
        printf("%s\t", logo[i]);

        switch (i)
        {
            
            case 0:
                printf("OS: %s", arg);
                break;

        case 1:
            printf("CPU: %s", get_cpu_name());
            break;

        case 2:
            printf("Kernel: %s", get_kernel_version());
            break;

        case 3:
            printf("Uptime: %s", get_uptime());
            break;

        case 4:
            printf("Shell: %s", get_shell_version());
            break;

        case 5:
            printf("Resolution: %s", screen_resolution());
            break;

        case 6:
            printf("Disk Usage: %s", get_disk_usage());
            break;

        case 7:
            printf("GPU: %s", get_gpu_name());
            break;

        case 8:
            printf("RAM: %s", get_ram_usage());
            break;

        case 9:
            printf("Hostname: %s", detect_user());
            break;

            case 10:
                printf("User: %s", detect_user());
                break;

        }

        printf("\n");
    }
}