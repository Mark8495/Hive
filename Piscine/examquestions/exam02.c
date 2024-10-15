#include <unistd.h>

int is_char_present(char *str, char c, int len) {
    int i = 0;
    while (i < len) {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        write(1, "\n", 1);
        return 0;
    }

    char result[256];
    int index = 0;
    int i = 0;

    while (argv[1][i] != '\0') {
        if (!is_char_present(result, argv[1][i], index)) {
            result[index] = argv[1][i];
            index++;
        }
        i++;
    }

    i = 0;
    while (argv[2][i] != '\0') {
        if (!is_char_present(result, argv[2][i], index)) {
            result[index] = argv[2][i];
            index++;
        }
        i++;
    }

    write(1, result, index);
    write(1, "\n", 1);

    return 0;
}
