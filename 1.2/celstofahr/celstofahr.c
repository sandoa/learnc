# include <stdio.h>
/* 当fahr=0, 20, 30, ..., 300时，分别打印
华氏温度与摄氏温度对照表 */
main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* 华氏温度的下限 */
    upper = 300;    /* 华氏温度的上限 */
    step = 20;      /* 温度间隔 */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
