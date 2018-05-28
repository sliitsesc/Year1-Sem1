//IP Online Test 4 Sample
//This will calculate discout and amount to be paid to the hotel according to the number of guests
#include <stdio.h>
float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount);
int main (void)
{
	int guests;
	float charge,discount,amount;

	printf("Enter Number of Guests:");
	scanf ("%d", &guests);

	if (guests < 0 || guests == 0)
		printf ("Enter a valid number\n");
	else {
		printf ("Enter Charge Per Guest:");
		scanf ("%f", &charge);
	
	discount = getDiscountPrice(guests, charge);
	amount = getAmount(guests, charge, discount);
	
	printf("Discount : %.2f\n", discount);
	printf ("Ammount to be paid : %.2f\n", amount);
	}
	return 0;
	
}
float getDiscountPrice (int noOfGuests, float chargePerGuest)
{
	float discount;
	
	if (noOfGuests > 150){
		discount = (((float)noOfGuests * chargePerGuest) / 100.00) * 10.00;
	}
	else
		discount = 0.00;
	return discount;
}
float getAmount (int noOfGuests, float chargePerGuest, float discount)
{
	return (noOfGuests * chargePerGuest) - discount;
}
