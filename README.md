# Project-Euler-2
My C++ solution to the second project euler problem on https://projecteuler.net/archives

The problem is stated as follows:

*Each new term in the Fibonacci sequence is generated
by adding the previous two terms. By starting
with 1 and 2, the first 10 terms will be:*

*1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...*

*By considering the terms in the Fibonacci sequence 
whose values do not exceed four million, find the sum of the even-valued terms.*

My solution starts by initializing four variables. int n1 is the first fib term (n1=1)
and int n2 is the second fib term (n2=2). I use a while loop that runs as long as n2
is less than 4 million. On each iteration, I use an int called num to temporarily
hold the sum of n1 and n2 (num = n1 + n2) before setting n1 to its next term (n1=n2). Then, I set
n2 = num because the next term for n2 is the sum of itself and n1. 
Finally, an if statement checks if n1 is a multiple of 2 using a % operator. 
If so, n1 is added to an int called sum (which is the fourth variable). 
Although n1 will have already been set to its second term by the
time it is first checked, that is not an issue because we know the first term is 1, 
which is not even.


