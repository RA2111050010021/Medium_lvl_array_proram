# Medium_lvl_array_proram
Medium level array program assignment for Clap1

Problem Description:

Elavenil is the most popular girl in the city. Each boy can only dream about dating her. Other girls want to be like her.

Elavenil is going to find herself a boyfriend. Of course such a beauty needs someone special. That's why she is going to announce a quiz. Even you can try your chances at this. Apart from boys, the girl also loves math. That's why this quiz is going to be mathematical.

She has two matrixes with N rows and M columns each. Let Pi¡ and Ai¡ be the ith element of the ith row of the first and second matrixes respectively. She likes O, that's why she is going to get rid of all non zero numbers in the second matrix. In each turn she may choose five integers:

1 ≤ x1 ≤ x2 ≤ N
1 syl < y2 ≤ M
0 ≤k ≤ 10000
and after this, for all pairs (i,j) such that:
xl si≤ x2
yl ≤ i ≤y2
she does the following:
Ai,j = (k + Ai,j) modulo Pi,j

Problem:

It takes her a lot of turns to do this. That's why she gives this problem to all boys in the city and promises to go for a date with the one who will solve this task with the fewest number of moves.
It is your chance to walk with such a wonderful girl. Just use it!

Constraints: 66 SN, MS 99 1 s Pijs 10 Os Aij< Pij

Input Format: The first line contains two space-separated integers N and M, denoting the size of the matrix. Then the ith line of the next N lines contains M space-separated integers Pi, 1, Pi, 2, ..., Pi,M. After matrix P, matrix A is given in the same format

Output Format: In the first line, print the integer Q 10 SQSN* M), denoting the number of the moves for erasing all non zero numbers from the second matrix. In the ith line of the next Q lines, print 5 space-separated integers xl, yl, x2, y2, k, denoting the information about submatrix chosen at the ith move.

Note: Your solution will be judged as wrong answer if Q is larger than N*M.
