/*
There are X kgs of Apple, Y kgs of Banana and Z kgs of Watermelon in a fruit shop. 
To prepare a box of fruit salad (7kgs), the fruits are required in the ratio of 1 : 2 : 4 (Apple : Banana : Watermelon). 
The program must print the maximum number of boxes of fruit salad that can be prepared from the given quantity of fruits as the output. 

Boundary Condition(s): 0 <= X, Y, Z <= 1000 

Input Format:  The first line contains X, Y and Z separated by a space. 

Output Format: The first line contains the maximum number of boxes of fruit salad that can be prepared from the given quantity of fruits. 

Example Input/Output 1: 

Input:  2 5 7 

Output: 1

Explanation:

There are 2kgs of Apple, 5kgs of Banana and 7kgs of Watermelon. 
The ratio of fruits required to prepare a box of fruit salad is 1 : 2 : 4 (Apple : Banana : Watermelon).
Here, only 1 box of fruit salad is possible to prepare from the 2kgs of Apple, 5kgs of Banana and 7kgs of Watermelon. 
So 1 is printed as the output. 

Example Input/Output 2: 

Input:  4 8 14 

Output: 3 

Example Input/Output 3: 

Input:  2 10 3

Output: 0

SOLUTION:
*/


/*
PY3:
X, Y, Z = input().split()
X = int(X); Y = int(Y); Z = int(Z)
#print(X, Y, Z)
Count = 0
while X >= 1 and Y >= 2 and Z >= 4:
    Count += 1
    Z -= 4
    Y -= 2
    X -= 1
print(Count)
*/
