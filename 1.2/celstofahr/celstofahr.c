# include <stdio.h>
/* 当华氏温度fahr=0, 20, 30, ..., 300时，分别打印
对应的摄氏温度对照表 */
main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      /* 华氏温度的下限 */
    upper = 300;    /* 华氏温度的上限 */
    step = 20;      /* 华氏温度的间隔 */

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%.0fF\t%.3fC\n", fahr, celsius);
        fahr = fahr + step;
    }
}
