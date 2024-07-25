# Spaced Repetition Time Table

| No. | Time | Content | Review today's | Review past No. |
| --- | --- | --- | --- | --- |
| 1 | Day 1 | [CN1. TCP/IP Model and OSI Model](CN1.md);<br>[CN2. What happens from the input of a URL to the display of a webpage](CN2.md);<br>[AL704. Binary Search](AL704.cpp);<br>[AL27. Remove Element](AL27.cpp);<br>[AL977. Squares of a Sorted Array](AL977.cpp);<br>[AL209. Minimum Size Subarray Sum](AL209.cpp);<br>[AL59. Spiral Matrix II](AL59.cpp) | [:white_check_mark:]  2 hrs <br>[:white_check_mark:] 12 hrs |  |


# Preview

AL704 & AL27 & AL977 & AL209 & AL59: 
***Array Theory Basics***

Before you dive into solving Data Structures and Algorithms (DSA) problems involving arrays, it's crucial to have a solid understanding of the core concepts that underpin this fundamental data structure.  

**What is an Array?**

At its heart, an array is a linear data structure that stores a **fixed-size** sequential collection of elements of the **same data type**. 

**Key Characteristics:**

* **Contiguous Memory Allocation:** Elements of an array are stored in adjacent memory locations. This means accessing elements directly via their index (position) is very efficient (constant time, O(1)).
* **Fixed Size:**  Once an array is created, its size cannot be changed. 
* **Data Type Consistency:** All elements within a single array must belong to the same data type (e.g., an array of integers, an array of characters).

**Advantages:**

* **Fast Element Access:** Direct indexing provides constant-time access (O(1)) to any element.
* **Simple and Efficient:**  Arrays are conceptually straightforward, making them easy to understand and work with, especially for iterative tasks.
* **Foundation for Other Data Structures:** Arrays often serve as building blocks for more complex data structures like stacks, queues, and hash tables.

**Disadvantages:**

* **Fixed Size:**  Inability to resize dynamically can lead to memory waste if the array is too large or require creating a new, larger array to accommodate more data if needed. 
* **Insertion and Deletion:**  Inserting or deleting elements in the middle of an array can be inefficient as it may involve shifting subsequent elements.

**Essential Array Operations and Time Complexities**

Operation | Description | Time Complexity
------------- | ------------- | -------------
Access (Reading)  | Retrieve an element by its index  | O(1) 
Search (Linear Search) |  Find a specific element | O(n) - worst case
Insertion (at the end) | Add an element at the end | O(1) - if space is available; otherwise, O(n) for resizing.
Insertion (in the middle)  | Add an element at a given index | O(n) - worst case, as elements might need to be shifted.
Deletion (from the end)  |  Remove an element from the end |  O(1) 
Deletion (from the middle)  | Remove an element from a given index | O(n) - worst case

**Important Array Concepts**

1. **Indices (Indexes):** Arrays use zero-based indexing in most programming languages. The first element is at index 0, the second at index 1, and so on.
2. **Multidimensional Arrays:**  Arrays can have multiple dimensions (arrays of arrays).  For example, a two-dimensional array can represent a matrix or a grid. 
3. **Passing Arrays to Functions:**  When an array is passed to a function, usually only a reference (pointer to the array's first element) is passed.  Modifications made to the array inside the function affect the original array. 

**Getting Ready to Solve Array Problems**

* **Master Basic Operations:** Be confident in accessing, iterating, inserting, and deleting elements in an array using the syntax of your chosen programming language.
* **Understand Tradeoffs:** Recognize situations where arrays are advantageous (e.g., when you need fast access to elements) and where their limitations (e.g., fixed size) might be problematic. 

**Final Note:** Array concepts often form the bedrock of coding interviews. Having a strong grasp of these fundamentals will serve you well in tackling a wide range of problems. 



# Study

- CN1:  
[OSI model (text)](https://www.geeksforgeeks.org/open-systems-interconnection-model-osi/)  
[TCP/IP model (text)](https://www.geeksforgeeks.org/tcp-ip-model/?ref=lbp)  
[OSI & TCP/IP model (videos)](https://www.youtube.com/playlist?list=PLBbU9-SUUCwUyqvfypPAHWOaDr7Wz4P6t)  

- CN2:  
[What happens when you type a URL in the web browser and press Enter? Computer Stuff #18 (video)](https://www.youtube.com/watch?v=vvpCnjyjTuU)  

- DSA problems description:
[AL704. Binary Search](https://leetcode.com/problems/binary-search/description/)
[AL27. Remove Element](https://leetcode.com/problems/remove-element/description/)
[AL977. Squares of a Sorted Array](https://leetcode.com/problems/squares-of-a-sorted-array/description/)
[AL209. Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/description/)
[AL59. Spiral Matrix II](https://leetcode.com/problems/spiral-matrix-ii/description/)
