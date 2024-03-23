#include <iostream>

int check_arr[4];
int my_arr[4];
int check_secret = 0;

void add(char c);

void remove(char c);

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int s, p;
    std::cin >> s >> p;

    int result = 0;

    std::string a;
    std::cin >> a;

    for (int i = 0; i < 4; i++) {
        std::cin >> check_arr[i];

        if (check_arr[i] == 0) {
            check_secret++;
        }
    }

    for (int i = 0; i < p; i++) {
        add(a[i]);
    }

    if (check_secret == 4) {
        result++;
    }

    for (int i = p; i < s; i++) {
        add(a[i]);
        remove(a[i - p]);

        if (check_secret == 4) {
            result++;
        }
    }

    std::cout << result << '\n';
}

void add(char c) {
    switch (c) {
        case 'A':
            my_arr[0]++;
            if (my_arr[0] == check_arr[0]) {
                check_secret++;
            }
            break;
        case 'C':
            my_arr[1]++;
            if (my_arr[1] == check_arr[1]) {
                check_secret++;
            }
            break;
        case 'G':
            my_arr[2]++;
            if (my_arr[2] == check_arr[2]) {
                check_secret++;
            }
            break;
        case 'T':
            my_arr[3]++;
            if (my_arr[3] == check_arr[3]) {
                check_secret++;
            }
            break;
    }
}

void remove(char c) {
    switch (c) {
        case 'A':
            if (my_arr[0] == check_arr[0]) {
                check_secret--;
            }
            my_arr[0]--;
            break;
        case 'C':
            if (my_arr[1] == check_arr[1]) {
                check_secret--;
            }
            my_arr[1]--;
            break;
        case 'G':
            if (my_arr[2] == check_arr[2]) {
                check_secret--;
            }
            my_arr[2]--;
            break;
        case 'T':
            if (my_arr[3] == check_arr[3]) {
                check_secret--;
            }
            my_arr[3]--;
            break;
    }
}