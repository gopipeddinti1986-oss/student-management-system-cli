#include <stdio.h>
#include <string.h>

int login() {
    char u[50], p[50], fu[50], fp[50];

    FILE *f = fopen("data/login.dat", "r");
    if (!f) {
        printf("[ERROR] Login file missing\n");
        return 0;
    }

    printf("Username: ");
    scanf("%s", u);

    printf("Password: ");
    scanf("%s", p);

    fscanf(f, "%s %s", fu, fp);
    fclose(f);

    return (strcmp(u, fu) == 0 && strcmp(p, fp) == 0);
}