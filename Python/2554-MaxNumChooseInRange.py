'''
2554. Maximum Number of Integers to Choose From a Range I

You are given an integer array banned and two integers n and maxSum. You are choosing some number of integers following the below rules:

    - The chosen integers have to be in the range [1, n].
    - Each integer can be chosen at most once.
    - The chosen integers should not be in the array banned.
    - The sum of the chosen integers should not exceed maxSum.

Return the maximum number of integers you can choose following the mentioned rules.

Example 1:

Input: banned = [1,6,5], n = 5, maxSum = 6
Output: 2
Explanation: You can choose the integers 2 and 4.
2 and 4 are from the range [1, 5], both did not appear in banned, and their sum is 6, which did not exceed maxSum.

Example 2:

Input: banned = [1,2,3,4,5,6,7], n = 8, maxSum = 1
Output: 0
Explanation: You cannot choose any integer while following the mentioned conditions.

Example 3:

Input: banned = [11], n = 7, maxSum = 50
Output: 7
Explanation: You can choose the integers 1, 2, 3, 4, 5, 6, and 7.
They are from the range [1, 7], all did not appear in banned, and their sum is 28, which did not exceed maxSum.


'''

### FINAL SOLUTION
def maxCount(banned, n, maxSum) -> int:
    banned_set = set(banned)
    runningTotal, resultCount = 0, 0
    for x in range(1, n+1):
        if x not in banned_set:
            runningTotal += x
            if runningTotal > maxSum:
                break
            else:
                resultCount += 1
    return resultCount

### ONE LINE SOLUTION FROM INTERNET
def maxCount1(banned, n, maxSum) -> int:
    return sum(q<=M for q in accumulate(filter(lambda v,b={*b}:v not in b,range(1,n+1))))


### SHORTEN SOLUTION TO MAKE TIME LIMIT
def maxCount2(banned, n, maxSum) -> int:
    nonBannedIntegers = []
    runningTotal = 0
    resultCount = 0
    for x in range(1, n+1):
        if x not in banned:
            nonBannedIntegers.append(x)
            runningTotal += x
            if runningTotal > maxSum:
                break
            else:
                resultCount += 1
    return resultCount


### INITIAL SOLUTION

# def maxCount(self, banned: List[int], n: int, maxSum: int) -> int:
def maxCount3(banned, n, maxSum) -> int:
        
    # Get Min and Max value of the range 
    minValue = 1
    maxValue = n + 1

    # List of possible integers
    nonBannedIntegers = []

    # Sum value of non-banned Integers
    runningTotal = 0

    # Output count
    resultCount = 0

    # Loop through Banned list
    # Add values to non-banned list if not banned integer
    for x in range(minValue, maxValue):
        if x in banned or x in nonBannedIntegers:
            continue
        else:
            nonBannedIntegers.append(x)

    # Loop through non-banned list
    # Check if running total greater than max sum
    # Check if next value in list goes past max sum
    for x in nonBannedIntegers:
        if runningTotal > maxSum:
            break

        runningTotal += x

        if runningTotal > maxSum:
            break
        else:
            resultCount += 1

    return resultCount


# Test Cases
test1 = maxCount([1,6,5], 5, 6)
test2 = maxCount([1,2,3,4,5,6,7], 8, 1)
test3 = maxCount([11], 7, 50)

print("Test 1 Result (expect 2): " + str(test1))
print("Test 2 Result (expect 0): " + str(test2))
print("Test 3 Result (expect 7): " + str(test3))