#include <unistd.h>
int main(int argc, char **argv)
{
    int i = argc - 1;
    int j = 0;
    while(i > 0)
    {
        while(argv[i][j])
        {
            j++;
        }
        write(1, argv[i], j);
        write(1, "\n", 1);
        i--;
    }
}