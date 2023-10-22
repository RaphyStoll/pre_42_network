#include <unistd.h>
int main(int argc, char **argv)
{
    int count = 0;
    (void)argc;
    while(argv[0][count])
        count++;
    write(1, argv[0], count);
    write(1, "\n", 1);
}