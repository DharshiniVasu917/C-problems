#include <stdio.h>
int main() {
    int fuel,n,burn;
    scanf("%d",&fuel);
    scanf("%d",&n);
    int i=0,emergencyStage=-1,fuelWasted=0;
    while (i<n) {
        scanf("%d",&burn);
        if (emergencyStage==-1) {
            if (fuel<burn) {
                emergencyStage=i+1;
                fuelWasted=burn-fuel;
            } else {
                fuel-=burn;
            }  }
        i++;
    }
    if (emergencyStage!=-1) {
        printf("Emergency Stage: %d\n",emergencyStage);
        printf("Fuel Wasted: %d",fuelWasted);
    } else {
        printf("Emergency Stage: Not Occurred\n");
        printf("Fuel Wasted: 0");
    }

    return 0;
}
