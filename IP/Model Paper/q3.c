#include <stdio.h>

#define SIZE 5

struct call{
    int phoneNo;
    double localCallCharge;
    double inCallCharge;
    double roamingCharge;
};

int main(void){
    struct call callList[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        printf("Input Phone Number : ");
        scanf("%d", &callList[i].phoneNo);

        printf("Input Local Call Charge : ");
        scanf("%lf", &callList[i].localCallCharge);

        printf("Input International Call Charge : ");
        scanf("%lf", &callList[i].inCallCharge);

        printf("Input Roaming Charge : ");
        scanf("%lf", &callList[i].roamingCharge);
    }

    FILE *file;
    file = fopen("chargers.dat", "w");

    for (int j = 0; j < SIZE; ++j) {
        fprintf(file,"%d %lf %lf %lf \n",callList[j].phoneNo,callList[j].localCallCharge,callList[j].inCallCharge,callList[j].roamingCharge);
    }

}
