#include <stdio.h>

main() {
    float horizontal; //����
    float vertical; //����
    float area;

    printf("���簢���� ���� �Է�: ");
    scanf("%f", &horizontal);

    printf("���簢���� ���� �Է�: ");
    scanf("%f", &vertical);

    area=horizontal * vertical;
    printf("area : %.2f \n", area);
    return 0;
}