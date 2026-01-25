#include <stdio.h>
int main() {
    int n, i;
    float arr[100], sum = 0, avg, greaterSum = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    for(i = 0; i < n; i++)
        if(arr[i] > avg)
            greaterSum += arr[i];
    printf("%.2f", greaterSum);
    return 0;
}

