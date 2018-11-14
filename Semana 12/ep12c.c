#include <stdio.h>

int min(int *array) {
    int min_value, i;

    min_value = array[0];
    for (i = 0; i < 5; i++) {
        if (min_value > array[i]) {
            min_value = array[i];
        }
    }

    return min_value;
}

int max(int *array) {
    int max_value, i;

    max_value = array[0];
    for (i = 0; i < 5; i++) {
        if (max_value < array[i]) {
            max_value = array[i];
        }
    }

    return max_value;
}

int fixed_avg(int *array) {

    int min_value, max_value, i, sum = 0;
    float pos, avg;

    min_value = min(array);
    max_value = max(array);
    pos = 0.;

    for (i = 0; i < 15; i++) {
        if (array[i] != min_value && array[i] != max_value) {
            sum = sum + array[i];
            pos++;
        }
    }
    avg = sum / pos;
    printf("%.2f", avg);
    ;
}


int main() {

    int grades[] = {1,2,3,4,5,6,7,1,2,3,4,5,6,7,8};
    fixed_avg(grades);

    return 0;
}
