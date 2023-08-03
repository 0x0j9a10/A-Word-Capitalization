#include <stdio.h>
#include <string.h>

int main()
{

    char name[1000];
    scanf("%s", &name);
    if (name[0] >= 'A' && name[0] <= 'Z')
    {

        printf(name);
    }
    else
    {
        name[0] -= 32;
        printf(name);
    }

    return 0;
}
