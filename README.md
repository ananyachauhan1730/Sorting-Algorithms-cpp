# Sorting-Algorithms-cpp
# Aim: 
To study and implement Sorting Algorithm

i) Selection Sort

ii) Insertion Sort

iii) Bubble Sort

# Apparatus:
vs code 

# Theory:

A Sorting Algorithm is used to rearrange a given array or list of elements according to a comparison operator on the elements. The comparison operator is used to decide the new order of elements in the respective data structure.

# Selection Sort:

In selection sorting technique, the smallest element is fetched by comparing itself with the rest of the elements and sorted at the array's first position. The complete array is divided into two halves, the sorted subarray on the left and the unsorted subarray on the right. Once the first element is sorted, the search for the second minimum element begins from the rest of the array and is positioned at second place.

# Insertion Sort:

In this sorting technique, the elements are sorted by comparing the elements with their previous elements. It starts by comparing the second element with the first element. If the second element is smaller than the first, then we will swap it.After that, we will compare the third element with all the elements that are before it. Similarly, it goes for the fourth element and so on. Once all the comparisons are made, the elements become sorted.

# Bubble Sort:

Bubble sort is one of the most straightforward sorting algorithms. In this sorting technique, we begin by comparing the first two elements of the array and checking if the first element is greater than the second element; if it is, we will swap those elements and move forward to the next element.

# Algorithm Code 1:

1. Start with the first element, assume it is the minimum.

2. Compare this element with all the remaining elements.

3. If any smaller element is found, mark its position as the new minimum.

4. Swap the minimum element with the current element.

5. Repeat steps 1–4 for the next position until the entire array is sorted.

6. stop

# Algorithm Code 2:
  
1. Input: An array A of n elements
Output: The array A sorted in ascending order

2.Start from the second element (index 1) of the array.

3.Set key = A[i] (the element to be inserted).

4.Initialize j = i - 1

•Compare key with each element in the sorted portion (A[0..i-1]):

5.While j >= 0 and A[j] > key do:

6.Move A[j] one position to the right: A[j + 1] = A[j]

7.Decrement j by 1 (j = j - 1)

8.Insert key at its correct position: A[j + 1] = key.

9.Increment i and repeat steps 2–5 until all elements are processed.

10.End – the array is sorted.

# Algorithm Code 3:

1.Input: Array A of n elements

2.Output: Sorted array in ascending order

3.Start with n = 0.

4.Repeat until n = number of elements:
2.1 For each index i from 0 to elements - n - 2:
- If A[i] > A[i + 1], swap A[i] and A[i + 1].
2.2 Increment n by 1.

5.End – the array is sorted.

# Conclusion:

In this program, we implemented a sorting algorithm to arrange the elements of an array in ascending order. By repeatedly comparing and swapping (or inserting) elements into their correct positions, the array becomes fully sorted. This process demonstrates the importance of algorithmic thinking and efficient data handling in programming.

The program successfully takes input from the user, sorts the array using the chosen sorting technique, and displays the sorted array. Such sorting algorithms are fundamental in computer science and serve as the basis for more advanced algorithms used in real-world applications.






