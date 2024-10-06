This repository contains an example C program that demonstrates concurrency using POSIX threads (pthreads). The program creates multiple threads and each thread prints its ID concurrently.

## Table of Contents

- [Introduction](#introduction)
- [Requirements](#requirements)
- [Installation and Compilation](#installation-and-compilation)
- [Usage](#usage)
- [Explanation](#explanation)
- [License](#license)
- [Expected Output](#output)


## Introduction
Concurrency allows multiple parts of a program to execute out of order or in partial order, without affecting the final outcome. This is often done to improve performance by doing multiple tasks simultaneously.

In this example, we use the pthread library to create and manage multiple threads in C. Each thread runs a simple function that prints its thread ID.

## Requirements
C Compiler: Make sure you have a GCC-compatible compiler installed. (e.g., gcc).
POSIX Threads (pthreads) Library: This example uses the pthread library, which is available by default on Linux and macOS.


## Installation and Compilation

1.Clone the repository to your local machine:

```git clone https://github.com/yourusername/concurrency-example.git```

```cd concurrency-example```

2. Compile the program using gcc with the -pthread flag:

```gcc -o concurrency_example concurrency_example.c -pthread```

## Usage
After compilation, you can run the program with:

```./concurrency_example```

## Explanation

`pthread_create`: This function is used to create new threads. Each thread runs a function (print_thread_id) in parallel.

`pthread_exit`: Used to terminate a thread when it completes its work.

`pthread_join`: This function blocks the main program until the specified thread finishes execution.

In this example, 5 threads are created, each printing its unique ID concurrently.

## License

This project is open-source and available under the MIT License.

## Output:
The program will create 5 threads, each printing a unique thread ID. The output may look like this:

  
    Creating thread 0
    Creating thread 1
    Creating thread 2
    Creating thread 3
    Creating thread 4
    Thread ID: 0 is running
    Thread ID: 1 is running
    Thread ID: 2 is running
    Thread ID: 3 is running
    Thread ID: 4 is running
    All threads completed.
    
