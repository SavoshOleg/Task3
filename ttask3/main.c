#include <stdio.h>
#include <math.h> // �� �������� ������� ��� ��� ������������ ������� 'pow()', ��� �������� ����������� ������ �����
#include <locale.h> // �� �������� ��� ��� ���������� ��������� ����

int main() {
    // ������� ������� ��� ������ ��� ���������� ����������� ��������� ����
setlocale(LC_ALL, "");
system("chcp 1251");
system("cls");
    int p;
    printf("������ ������� ������� p: ");
    scanf("%d", &p);

    // ���������� ������� ����� � p �������
    int totalNumbers = pow(2, p);

    // ���������� ������� �����, �� ��� ������� ����� �� ������ �����
    int excludedNumbers = totalNumbers - (p - 2);

    printf("ʳ������ �����: %d\n", excludedNumbers);

    return 0;
}
