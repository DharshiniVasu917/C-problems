#include <stdio.h>

int main() {
    int flightClass,extraWeight,totalCharge=0;
    scanf("%d%d",&flightClass,&extraWeight);
    switch (flightClass) {
        case 1:
            totalCharge=extraWeight*300;
            break;
        case 2:
            if (extraWeight<=3) {
                totalCharge=0;
            } else {
                totalCharge=(extraWeight-3)*300;
            }
            break;
    }
    if (totalCharge==0 && flightClass==2 && extraWeight<=3) {
        printf("Free\n");
    } else {
        printf("Extra Baggage Charge ₹%d\n",totalCharge);
    }

    return 0;
}