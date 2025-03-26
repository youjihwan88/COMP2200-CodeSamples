#include <stdio.h>

enum champ
{
    CHAMP_ZED,
    CHAMP_JAX,
    CHAMP_VAYNE,
    CHAMP_LULU,
    CHAMP_LEESIN
};

enum role
{
    ROLE_TOP,
    ROLE_JUNGLE,
    ROLE_MID,
    ROLE_BOTTOM,
    ROLE_SUPPORT
};

int main(void)
{
    enum champ my_champ = CHAMP_VAYNE;
    enum role my_role = ROLE_BOTTOM;

    printf("my_champ: %d\n", my_champ);
    printf("my_role: %d\n", my_role);
    printf("\n");

    /* warning: implicit conversion from enumeration type 'enum champ' to different enumeration type 'enum role' */
    my_role = CHAMP_LEESIN;
    printf("my_role: %d\n", my_role);
    return 0;
}
