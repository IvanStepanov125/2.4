#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    int a, b, c;
    int s1, s2, s3;
    scanf("%d %d %d", &a, &b, &c);
    int max_s, sr_s, min_s;
    max_s = max(a, max(b, c));
    min_s = min(a, min(b, c));
    sr_s = a + b + c - max_s - min_s;
    s1 = min_s * min_s;
    s2 = sr_s * sr_s;
    s3 = max_s * max_s;
    if ((s1 + s2) < s3){
        printf("Тупоугольный треугольник");
    }
    else {

        if (s1 + s2 > s3) {
            printf("Остроугольный треугольник");
        }
        else {
            if ((s1 + s2) == s3)
                printf("Прямоугольный треугольник");
        }
    }

    return 0;

}