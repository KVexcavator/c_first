#include <stdio.h>
#include <wchar.h>
#include <locale.h>

void print_reverse(wchar_t *s)
{
    size_t len = wcslen(s);
    wchar_t *t = s + len - 1;

    while (t >= s) {
        putwchar(*t);
        t--;
    }
    putwchar(L'\n');
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");  // Set locale to Russian UTF-8
    wchar_t *juices[] = {
        L"питайя",
        L"арбуз",
        L"хурма",
        L"аглифрут",
        L"ромовоя ягода",
        L"ливи",
        L"шелковица",
        L"земляника",
        L"черника",
        L"ежевика",
        L"карамбола"
    };
    wchar_t *a;
    wprintf(L"%ls\n", juices[6]);
    print_reverse(juices[7]);
    a = juices[2];
    juices[2] = juices[8];
    juices[8] = a;
    wprintf(L"%ls\n", juices[8]);
    print_reverse(juices[(18 + 7) / 5]);
    wprintf(L"%ls\n", juices[2]);
    print_reverse(juices[9]);
    juices[1] = juices[3];
    wprintf(L"%ls\n", juices[10]);
    print_reverse(juices[1]);
    return 0;
}
