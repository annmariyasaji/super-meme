# Q3 Complexity Analysis

## 1. Max Heap

### Insertion
Each score is inserted at the end of the heap and may move upward until the Max Heap property is restored.

- Best case: O(1)
- Worst case: O(log n)
- Space: O(n)

### Finding the maximum
In a Max Heap, the largest element is always the root.

- Time: O(1)
- Space: O(1) extra space

## 2. Linear Search

To find the largest score, every score after the first is compared with the current maximum.

For n scores:

- Comparisons: n - 1
- Time: O(n)
- Space: O(1) extra space when the input array is already stored

For the given 8 scores:

- Comparisons = 8 - 1 = 7
- Maximum = 95

## Overall observation

A Max Heap requires more work when inserting because the heap property may need to be restored, but it provides constant-time access to the current maximum. Linear Search is simple, but finding the maximum requires scanning the scores.
