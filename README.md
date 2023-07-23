# 0x1B. C - Sorting Algorithms & Big O
This project focuses on implementing various sorting algorithms in C and understanding their efficiency through `Big O notation`. Sorting algorithms are essential in computer science as they help arrange elements in a specific order, facilitating efficient searching and retrieval of data. This project explores at least four different sorting algorithms, explains the concept of `Big O notation`, guides in evaluating the time complexity of algorithms, helps select the best sorting algorithm for a given input, and discusses stable sorting algorithms.

## Table of Contents
 - Sorting Algorithms
 - Big O Notation
 - Evaluating Time Complexity
 - Selecting the Best Sorting Algorithm
 - Stable Sorting Algorithm


### 1. Sorting Algorithms
This project will implement at least four different sorting algorithms, including but not limited to:

 1. Bubble Sort
 2. Insertion Sort
 3. Selection Sort
 4. Merge Sort
 5. Quick Sort

Each algorithm will be demonstrated using C code examples to show their working and performance.

## 2. Big O Notation
`Big O notation` is a way of expressing the upper bound of the time or space complexity of an algorithm. It provides an estimate of how the algorithm's performance scales with the size of the input data. Common notations include O(1), O(log n), O(n), O(n log n), O(n^2), etc.

## 3. Evaluating Time Complexity
To evaluate the time complexity of an algorithm, analyze the number of basic operations (comparisons, assignments) performed concerning the size of the input. Ignore constants and lower-order terms to determine the dominant term that defines the algorithm's behavior with larger inputs.

For example, the time complexity of a basic linear search algorithm is O(n), where "n" is the size of the input.

## 4. Selecting the Best Sorting Algorithm
The efficiency of sorting algorithms depends on the type and size of the data being sorted. Some sorting algorithms perform better on certain data distributions or data sizes. For example, Merge Sort and Quick Sort are generally more efficient on larger datasets, while Insertion Sort may perform better on small, nearly sorted datasets.

It's essential to analyze the characteristics of the data and consider the algorithm's time complexity to select the most appropriate sorting algorithm for the specific use case.

## 5. Stable Sorting Algorithm
A stable sorting algorithm maintains the relative order of elements with equal keys after sorting. In other words, if two elements have the same key value and appear in a certain order in the input, a stable sorting algorithm will keep that order in the output.

###### " For example: if we have a list of records with names and ages, and we sort them by name, a stable sorting algorithm will preserve the relative order of people with the same name."

Stability can be important in certain applications where the original order holds valuable information.

This project "``0x1B. C - Sorting Algorithms & Big O``" will delve into the above topics, providing in-depth explanations and C code examples to help you understand sorting algorithms, `Big O notation`, time complexity evaluation, and stable sorting algorithms. Feel free to explore the code and concepts further to deepen your understanding of sorting algorithms and their efficiency.