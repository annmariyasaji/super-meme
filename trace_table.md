Q3 Trace Table – Max Heap Insertion

| Step | Inserted score | Heap after insertion |
|---|---:|---|
| 1 | 78 | 78 |
| 2 | 92 | 92, 78 |
| 3 | 65 | 92, 78, 65 |
| 4 | 88 | 92, 88, 65, 78 |
| 5 | 95 | 95, 92, 65, 78, 88 |
| 6 | 72 | 95, 92, 72, 78, 88, 65 |
| 7 | 84 | 95, 92, 84, 78, 88, 65, 72 |
| 8 | 90 | 95, 92, 84, 90, 88, 65, 72, 78 |

Important observation:
- 95 becomes the root after its insertion.
- Therefore, the maximum score is 95.

Linear Search trace:
| Comparison | Current maximum | Next score | Action |
|---|---:|---:|---|
| 1 | 78 | 92 | Update max to 92 |
| 2 | 92 | 65 | Keep 92 |
| 3 | 92 | 88 | Keep 92 |
| 4 | 92 | 95 | Update max to 95 |
| 5 | 95 | 72 | Keep 95 |
| 6 | 95 | 84 | Keep 95 |
| 7 | 95 | 90 | Keep 95 |

Final maximum = 95.
