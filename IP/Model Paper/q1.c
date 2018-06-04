//Question 1 
#include <stdio.h>

int main(void){

    //Variable declaration
    char roomType, payMethod, con = 'N';
    int numOfRooms, night;
    double rate = 0, discount = 0, total;

    printf("Room Type \t Description \t\t Rate per Night \n");
    printf("  D \t\t Deluxe \t\t 31000.00 \n");
    printf("  S \t\t Superior Deluxe \t 35000.00 \n");
    printf("  C \t\t Club Suites \t\t 50000.00 \n");
    printf("  E \t\t Executive Suites \t 75000.00 \n");
    printf("  P \t\t Presidential Suite \t 100000.00 \n\n");

    do{
        printf("Input room type : ");
        scanf(" %c", &roomType);

        printf("Input number of rooms : ");
        scanf("%d", &numOfRooms);

        printf("Input no of nights : ");
        scanf("%d", &night);

        printf("Input Payment method : ");
        scanf(" %c", &payMethod);

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
            default: printf("Invalid type !!!");
        }

        total = rate * night * numOfRooms;

        if (payMethod == 'C' || payMethod == 'c'){
            discount = total * 0.1;
        }

        total -= discount;

        printf("Your total amount : %.2f\n", total);

        printf("Do you want to continue ? (Y/N)\n");
        scanf(" %c", &con);
    }while (con == 'Y' || con == 'y');
}
