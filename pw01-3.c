#include <stdio.h>

int main(void) {
    const char *name = "Yurii";
    const char *group = "IV-623";
    const char *hostname = "lkfgdx";
    printf("%s\t{%zu}\n%s\t%s\t{%zu}\n", name, strlen(name) + 1, group, hostname,  strlen(group) + 1 + strlen(hostname) + 1);
    
    return 0;

}

