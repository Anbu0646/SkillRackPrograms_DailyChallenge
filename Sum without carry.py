'''
The program must accept two integers A and B having same number of digits as the input. 
The program must add the digits of A and B at same positions without any carry over. 
Then the program must print the sum as the output. 

Boundary Condition(s): 1 <= A, B <= 10^8 

Input Format:  The first line contains the values of A and B separated by a space. 
Output Format: The first line contains the value of sum based on the given conditions. 

Example Input/Output 1: 

Input:  123 219 
Output: 332 

Explanation: The last digits 3 and 9 are added to get 12. But the carry is not forwarded to the digit so only 2 is printed.
The remaining two digits are added as 2 + 1 = 3 and 1 + 2 = 3. Hence 332 is printed. 

Example Input/Output 2: 

Input:  999 999 
Output: 888

SOLUTION:
'''

A, B = map(str, input().split())
Res = ""

for i in range(len(A)):
    Sum = int(A[i]) + int(B[i])
    Res += str(Sum%10)

print(int(Res))
