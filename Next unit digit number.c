/*
The program must print accept an integer N as the input. The program must print the next integer of N which has the unit digit as 2 as the output. 

Boundary Condition(s): 1 <= N <= 10^8 

Input Format:  The first line contains N. 
Output Format: The first line contains an integer. 

Example Input/Output 1: 

Input:  2  
Output: 12 

Explanation: The first integer after 2 which has its unit digit as 2 is 12. 

Example Input/Output 2: 
Input:  145 
Output: 152

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int n, y;
    scanf("%ld", &n);
    for(long int i=n+1;;i++)
    {
        long int j=i%10;
        if(j==2)
        {
            printf("%ld",  i);
            break;
        }
    }
}
