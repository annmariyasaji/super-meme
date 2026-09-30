#include <stdio.h>

#define N 8

int heap[N];
int heapSize = 0;

void insertMaxHeap(int value) {
    int i = heapSize;
    heap[heapSize++] = value;

    while (i > 0) {
        int parent = (i - 1) / 2;
        if (heap[i] > heap[parent]) {
            int temp = heap[i];
            heap[i] = heap[parent];
            heap[parent] = temp;
            i = parent;
        } else {
            break;
        }
    }
}

void printHeap() {
    for (int i = 0; i < heapSize; i++)
        printf("%d ", heap[i]);
    printf("\n");
}

int findMaxHeap(int *comparisons) {
    /* In a valid Max Heap, the maximum is always at the root. */
    *comparisons = 0;
    return heap[0];
}

int linearSearchMax(int a[], int n, int *comparisons) {
    int max = a[0];
    *comparisons = 0;

    for (int i = 1; i < n; i++) {
        (*comparisons)++;
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int main() {
    int scores[N] = {78, 92, 65, 88, 95, 72, 84, 90};
    int comparisonsHeap, comparisonsLinear;

    printf("Q3 - Student Score Maximum\n\n");

    printf("Input scores:\n");
    for (int i = 0; i < N; i++)
        printf("%d ", scores[i]);
    printf("\n\n");

    printf("Max Heap after each insertion:\n");
    for (int i = 0; i < N; i++) {
        insertMaxHeap(scores[i]);
        printf("After inserting %d: ", scores[i]);
        printHeap();
    }

    int maxHeap = findMaxHeap(&comparisonsHeap);
    int maxLinear = linearSearchMax(scores, N, &comparisonsLinear);

    printf("\nMaximum using Max Heap: %d\n", maxHeap);
    printf("Root comparison required to identify maximum: %d\n", comparisonsHeap);

    printf("\nMaximum using Linear Search: %d\n", maxLinear);
    printf("Comparisons in Linear Search: %d\n", comparisonsLinear);

    return 0;
}
