#include <stdio.h>

void findBestDays(int prices[], int n, int *buyDay, int *sellDay) {
    if (n < 2) {
        printf("Not enough data to determine best days.\n");
        *buyDay = -1;
        *sellDay = -1;
        return;
    }

    int minPriceIndex = 0; 
    
    int maxProfit = 0;     

    *buyDay = 0;  
    *sellDay = 0; 

    for (int i = 1; i < n; i++) {
        
        int profit = prices[i] - prices[minPriceIndex];

        if (profit > maxProfit) {
            maxProfit = profit;   
            *buyDay = minPriceIndex; 
            *sellDay = i;             
        }

       
        if (prices[i] < prices[minPriceIndex]) {
            minPriceIndex = i;
        }
    }
}

int main() {
    int n;
    printf("Enter the number of days: ");
    scanf("%d", &n);

    int prices[n];
    printf("Enter the prices of the commodity for %d days: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int buyDay, sellDay;
    findBestDays(prices, n, &buyDay, &sellDay);

    if (buyDay != -1 && sellDay != -1) {
        printf("Best day to buy: Day %d\n", buyDay);
        printf("Best day to sell: Day %d\n", sellDay);
        printf("Maximum profit: %d\n", prices[sellDay] - prices[buyDay]);
    } else {
        printf("No suitable days for profit.\n");
    }

    return 0;
}
