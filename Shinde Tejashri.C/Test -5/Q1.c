#include <stdio.h>


float calculateSellingPrice(float costPrice, float discount) 
{
    float sellingPrice;

    if (costPrice > 0) 
	{
        if (discount >= 0 && discount <= 100) 
		{
            sellingPrice = costPrice - (costPrice * discount / 100);
        }
		 else 
		 {
            
            printf("Invalid discount percentage. Must be between 0 and 100.\n");
            sellingPrice = -1;
        }
    } 
	else 
	{
    
        printf("Invalid cost price. Must be greater than 0.\n");
        sellingPrice = -1;
    }

    return sellingPrice;
}

int main()
 {
    float costPrice, discount, sellingPrice;


    printf("Enter the cost price of the book: ");
    scanf("%f", &costPrice);

    printf("Enter the discount percentage: ");
    scanf("%f", &discount);

    
    sellingPrice = calculateSellingPrice(costPrice, discount);

    
    if (sellingPrice != -1) 
	{
        printf("The selling price of the book is: %.2f\n", sellingPrice);
    }

    return 0;
}
