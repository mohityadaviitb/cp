#include <iostream>
#include <string>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        std::string s;
        std::cin >> s;

        int l = s.length();

        std::string sa = s.substr(0, l / 2);
        int a = std::stoi(sa);

        std::string sb = s.substr(l / 2, l);
        int b = std::stoi(sb);

        // This while loop might be causing the issue
        while (sb[0] == '0') {
            sb = s.substr(l / 2 + 1, l);
            b = std::stoi(sb);
        }

        int n = 0;
        while (a >= b) {
            if (n > 1000 || a == b) {
                n = 1001;
                std::cout << "-1" << std::endl;
                break;
            }

            sa = s.substr(0, l / 2 - 1);
            a = std::stoi(sa);

            sb = s.substr(l / 2 - 1, l);
            b = std::stoi(sb);
            n++;
        }

        if (n < 1000) {
            std::cout << a << " " << b << std::endl;
        }
    }

    return 0;
}
