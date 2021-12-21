# **<mark>First Come First Served (FCFS) Scheduling Algorthim</mark>**

## **What is FCFS?**

- In FCFS, CPU is allocated to the process in the order of their arrival.

- It is implemented with FIFO (**First in First Out**) queue.

- It is a non-preemptive scheduling algorithm.

   [^1] <u>non-preemptive</u> means algorthim designed such that once a process is allocated to cpu, it does not free cpu until it completes it's excution

   [^1]<u>preemptive algorithm</u> is one in which cpu is taken away from the process during execution. if any high priority process arrives, cpu from currently executing low priority process is allocated to it.

- FCFS is not recommendable for heavy workload.

## Example

- **If we assume that arrival time is 0. Consider the following example:**

| Process | Arrival | Burst Time |
| :-----: | :-----: | :--------: |
|    1    |    3    |     13     |
|    2    |    1    |     9      |
|    3    |    2    |     3      |

**The Gantt Chart shows the result:**

|  P2  |  p3  |  p2  |
| :--: | :--: | :--: |

0                                                                      9                                                                      12                                                              25 

**Turnaround Time (T.A)** : it is the sum of executation time of process and wait time

​				==**Turnaround Time = Brust Time + Wait Time**==

Now we will see the turnaround time of each process, total turnaround time and average turnaround time

- **T.A time of P2 = 9 + 0 = 9**
- **T.A time of P3 = 3 + 9 = 12**
- **T.A time of P1 = 13 + 12 = 25**

**Total T.A time** = T.A time of P2 + T.A time of P3 + T.A time of P1

​						=          9            +           12          +         25          =        46

**Average T.A time** = total T.A time / number of process

​							=        46     /       3      =  15.33



