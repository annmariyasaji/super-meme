# Q3 Comparison Table

## Max Heap vs Linear Search

| Feature | Max Heap | Linear Search |
|---|---|---|
| Given scores | 78, 92, 65, 88, 95, 72, 84, 90 | 78, 92, 65, 88, 95, 72, 84, 90 |
| Maximum found | 95 | 95 |
| Finding maximum | O(1) | O(n) |
| New insertion | O(log n) | O(1) for appending to an unsorted list |
| Data structure | Max Heap | Array/list |
| Space | O(n) | O(n) for storing the scores |
| Suitable for repeated maximum queries | Yes, because maximum remains at root | Requires a scan each time |

## Observation

For the given data, both approaches identify 95 as the highest score. A Max Heap is useful when the highest score has to be maintained while new scores are continuously inserted because the maximum is kept at the root.
