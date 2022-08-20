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

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"


int main() {


    //print the logo of the distro in use
    print_functions();





    printf( ANSI_COLOR_CYAN"OS:%s", get_distro_name());

    printf( "CPU: %s" ,get_cpu_name());

    printf("Kernel: %s",get_kernel_version());

    printf("Uptime: %s" ,get_uptime());

    printf("Shell: %s" ,get_shell_version());

    printf("Resolution: %s" ,screen_resolution());

    printf("Disk Usage: %s" ,get_disk_usage());

    printf("GPU: %s" ,get_gpu_name());

    printf("RAM: %s" ,get_ram_usage());

    return 0;


}




