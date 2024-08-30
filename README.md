This program calculates the sum of an array of integers using OpenMP for parallelization.

Array Initialization: The program initializes an array arr of size 1,000,000 with values from 1 to 1,000,000.

Parallelization: The OpenMP #pragma omp parallel for directive is used to parallelize the for loop. The reduction(+:sum) clause ensures that the partial sums computed by different threads are correctly combined into the final sum.

Reduction: The reduction(+:sum) ensures that the sum of all elements in the array is accumulated correctly across multiple threads.
