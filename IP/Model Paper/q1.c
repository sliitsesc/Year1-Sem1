//Question 1
#include <stdio.h>
int main(void){

    char roomType, payMethod, con;
    int numOfRooms, night;
    double rate = 0, discount = 0, total;

    do{
        printf("Input room type : ");
        roomType = (char) getchar();

        printf("Input payment method : ");
        payMethod = (char) getchar();

        printf("Input number of rooms : ");
        scanf("%d", &numOfRooms);

        printf("Input number of nights : ");
        scanf("%d ", &night);

        switch (roomType){
            case 'D': rate = 31000;
                break;
            case 'S': rate = 35000;
                break;
            case 'C': rate = 50000;
                break;
            case 'E': rate = 75000;
                break;
            case 'P': rate = 100000;
                break;
            default: printf("Invalid type ");
        }

        if (payMethod == 'C' || payMethod == 'c'){
            discount = 0.1;
        }

        total = rate * numOfRooms * night;
        total = rate + rate * discount;

        printf("Your total : %.2f \n", total);

        printf("Do you want to continue ?  ");
        con = (char) getchar();
    }while (con == 'Y' || con == 'y');

    return 0;
}