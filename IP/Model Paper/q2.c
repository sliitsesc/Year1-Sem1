//Question 2

#include <stdio.h>

int main(void){

    int day, dayOfMin, dayOfMax;
    double totalUsage = 0, averageUsage, min, max;
    double usage[4][7] = {1.2, 2.1, 0.8, 0.0, 1.0, 1.3, 4.0, 1.5, 3.2, 1.0, 1.3, 4.0, 1.5, 3.2, 2.3, 0.4, 1.2, 2.1, 0.8, 0.0, 2.6,
                          2.1, 1.7, 7.0, 1.2, 2.1, 0.8, 0.0
    };

    min = usage[0][0];
    max = usage[0][0];

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 7; ++j) {
            totalUsage += usage[i][j];
            day++;

            if (min > usage[i][j]){
                min = usage[i][j];
                dayOfMin = day;
            }

            if (max < usage[i][j]){
                max = usage[i][j];
                dayOfMax = day;
            }
        }
    }

    averageUsage = totalUsage / 28.0;

    printf("Day of the Month with maximum usage : %d \n", dayOfMax);
    printf("Maximum Usage in units : %.1f \n", max);
    printf("Day of the Month with minimum usage : %d \n", dayOfMin);
    printf("Minimum Usage in units : %.1f \n", min);
    printf("Average usage for the Month : %.1f \n", averageUsage);
    printf("Total usage for the month : %.1f \n", totalUsage);

}
