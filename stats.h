#ifndef STATS_H
#define STATS_H

#include <stdio.h>

#define MEDIAN(arr,length) ({\
    SORT(arr,length);\
    float med;\
    if (length % 2 == 0)\
        med = (arr[length/2 - 1] + arr[length/2]) / 2.0;\
    else\
        med = arr[length/2];\
    med;\
})

#define MEAN(arr, length) ({ \
    int i, sum = 0; \
    float mean; \
    for (i = 0; i < length; i++) \
        sum += arr[i]; \
    mean = sum / (float)(length); \
    mean; \
})

#define MAX(arr,length) ({ \
    int i, max = arr[0];\
    for(i=1;i<length;i++) \
        if(arr[i]>max) \
            max = arr[i]; \
    max;\
    })
#define MIN(arr, length) ({ \
    int i, min = arr[0]; \
    for (i = 1; i < length; i++) \
        if (arr[i] < min) \
            min = arr[i]; \
    min; \
})
#define SORT(arr, length) ({ \
    int temp; \
    int *p = malloc(sizeof(int) * length); \
    for (int i = 0; i < length - 1; i++) \
        for (int j = 0; j < length - 1 - i; j++) \
            if (arr[j] > arr[j + 1]) { \
                temp = arr[j]; \
                arr[j] = arr[j + 1]; \
                arr[j + 1] = temp; \
            } \
    printf("Sorted Array: "); \
    for (int k = 0; k < length; k++) { \
        printf("%d ", arr[k]); \
        p[k] = arr[k]; \
    } \
    printf("\n"); \
    free(p); \
    0; \
})
#define PRINT_ARRAY(arr,length) ({\
    int i;\
    printf("ARRAY: ");\
    for(i=0;i<length;i++)\
        printf("%d\t" , arr[i]);\
})
#define STATISTICS(arr,length) ({\
    int min = MIN(arr,length);\
    int max = MAX(arr,length);\
    float mean = MEAN(arr,length);\
    float med = MEDIAN(arr,length);\
    printf("MEAN = %f\n",mean);\
    printf("MEDIAN= %f\n",med);\
    printf("MAX= %d\n",max);\
    printf("MIN = %d\n",min);\
    return 0;\
    })




#endif
