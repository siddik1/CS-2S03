# Question 1

The Fibonacci series 0, 1, 1, 2, 3, 5, 8, 13, 21 ... begins with the terms 0 and 1 and has the property that each succeeding term is the sum of the two preceding terms.

Write a program that calculates the nth Fibonacci number using iterative approach.


# Question 2

Every budding computer scientist must grapple with certain classic problems, and the Towers of Hanoi is one of the most famous of these. Legend has it that in a temple in the Far East, priests are attempting to move a stack of disks from one peg to another. The initial stack had 64 disks threaded onto one peg and arranged from bottom to top by decreasing size. 
The priests are attempting to move the stack from this peg to a second peg under the constraints that exactly one disk is moved at a time, and at no time may a larger disk be placed above a smaller disk. A third peg is available for temporarily holding the disks. Supposedly the world will end when the priests complete their task, so there’s little incentive for us to facilitate their efforts.Let’s assume that the priests are attempting to move the disks from peg 1 to peg 3. 
We wish to develop an algorithm that will print the precise sequence of disk-to-disk peg transfers.If we were to approach this problem with conventional methods, we’d rapidly find ourselves hopelessly knotted up in managing the disks. Instead, if we attack the problem with recursion in mind, it immediately becomes tractable. Moving n disks can be viewed in terms of moving only n – 1 disks (and hence the recursion) as follows:

a) Move n – 1 disks from peg 1 to peg 2, using peg 3 as a temporary holding area.

b) Move the last disk (the largest) from peg 1 to peg 3.

c) Move the n – 1 disks from peg 2 to peg 3, using peg 1 as a temporary holding area

The process ends when the last task involves moving n = 1 disk, i.e., the base case. This is accomplished by trivially moving the disk without the need for a temporary holding are


### Part (i)

Write a program to solve the Towers of Hanoi problem using recursion

### Part (ii)

Write a program to solve the Towers of Hanoi problem using iteration
