There are n bricks arranged in a row at positions numbered from1through n, inclusive. There is an array, newtons[n], that contains an integer indicating the number of newtons required to smash a brick.  (A newton is a unit of force.)

There are two hammers, one big and one small.  The big hammer can smash any brick with one blow.  The small hammer reduces the newtons required by1for each blow to a brick.  For example, a brick requires3newtons of force.  It will take 1 blow with the big hammer, or 3 blows with the small hammer to smash it.  There is a limit to how many times the big hammer can be used.

Determine 3 values:

the minimum number of blows to smash all the bricks
// // the 1-based indices of the bricks smashed by the big hammer, sorted ascending
// // the 1-based indices of the bricks smashed by the small hammer, sorted ascending
// // Return the values as a 2-dimensional integer array, [[total hits], [big hammer hits], [small hammer hits]]. If a hammer is not used, its index array should be [-1].

// // Example

// // bigHits = 0

// // newtons = [2]

// // The big hammer cannot be used. The small hammer takes2blows to smash the single brick at index1.The return array is[[2], [-1], [1]].

// // bigHits = 4

// // newtons = [3, 2, 5, 4, 6, 7, 9] [13][3, 5, 6, 7][1, 2, 4]

// // int bigHits: the maximum blows with the big hammer

// // int newtons[n]: an array of distinct integers representing newtons required to smash each brick

// // 1 ≤ n ≤ 2 x 10^5
// // 0 ≤ bigHits ≤ 2 x 10^5
// // 1 ≤ newtons[i] ≤ 10^9
// // STDIN    Function
// // -----    --------
// // 9        bigHits = 9
// // 8        newtons[] size n = 8
// // 7        newtons = [7, 9, 3, 2, 5, 8, 4, 6]
// // 9
// // 3
// // 2
// // 5
// // 8
// // 4
// // 6
// // Output
// // long [[1],[p][q]]:in the form [[ total hits], [sorted indices for big hammer hits], [sorted indices for small hammer hits]]


// // Sample Input 1 

// // 9
// // 8
// // 7
// // 9
// // 3
// // 2
// // 5
// // 8
// // 4
// // 6
// // Sample Output 1

// // 8 
// // 1 2 3 4 5 6 7 8 
// // -1 

// // ------------------------------------------

// // Description

// // A pair of strings form a complementary pair if there is some permutation of their concatenation that is a palindrome. For example, the strings "abac" and "cab" form a complementary pair since their concatenation is "abaccab" which can be rearranged to form a palindrome, i.e.,"bcaaacb".

// // Given an array ofnstrings, find the number of complementary pairs that can be formed.

// // Note:Pairs of strings formed by indices(i, j)and(j, i)are considered the same.

// // Example

// // ConsiderstringData = ["abc", "abcd", "bc", "adc"].


// // The following complementary pairs can be formed:

// // ("abc", "abcd"), concatenated string = "abcabcd" - arranged as a palindrome -> "abcdcba".
// // ("abc", "bc"), concatenated string = "abcbc" -> "bcacb".
// // ("abcd", "adc"), concatenated string = "abcdadc" -> "acdbdca".
// // Return 3, the number of complementary pairs.


// // Input
// // string stringData[n]:the strings to pair

// // 1 ≤n≤ 10^5
// // 1 ≤length(stringData[i])≤ 3 * 10^5
// // 1 ≤ sum of the length of strings instringData≤ 3 * 10^5
// // All strings consist of lowercase English characters only.
// // STDIN	      FUNCTION
// // -----	      --------
// // 3        →    size of stringData[], n = 5
// // ball     →    stringData = ["ball", "all", "call", "bal"]
// // all
// // call
// // bal

// // Output
// // long_int:the number of complementary pairs that can be formed


// // Sample Input 1 

// // 4
// // ball
// // all
// // call
// // bal
// // Sample Output 1

// // 3

// //--------------------
// Developers are working on a new mapping library to help road planning. They are working on a new approach to minimize distances between places. Currently, there are two networks of places networkA and networkB in the form of two trees. The number of nodes in each network are networkA_nodes and networkB_nodes respectively. There is an undirected edge from networkA_ from[i] to networkA_to[i] (1 ≤i<networkA_nodes) in networkA. Similarly, there is an undirected edge from networkB_from[i] to networkB_to[i] (1 ≤i<networkB_nodes) in networkB.

// Their goal is to add one edge that connects a node in each network to minimize the maximum distance between any two nodes. Determine that distance.

// Given that one new road (or undirected edge) connecting one of the places in networkA and another in networkB is to be added in such a way such that maximum distance between any two different places in the final network in minimised, find the minimum possible required distance.

// Note:The distance between two nodes is defined as the number of edges in the simple path from one node to another. A simple path is a sequence of nodes connected by edges, and no node is used more than once in the sequence.

// Example

// networkA_nodes= 3

// networkA_from =[1, 1]

// networkA_to= [2, 3]

// networkB_nodes= 3

// networkB_from =[1, 2]

// networkB_to= [2, 3]

// Networks A and B connected between nodes A1 and B2

// This image illustrates the two networks joined from nodes A1 and B2. The table shows the maximum distances for all possible connections between networks.

// Network A	Network B	Maximum Distance	Node A	Node B
// 1	1	4	3	3
// 1	2	3	3	3
// 1	3	4	3	1
// 2	1	5	3	3
// 2	2	4	3	3
// 2	3	5	3	1
// 3	1	5	2	3
// 3	2	4	2	3
// 3	1	5	2	1
// In the first row, networks A and B are connected through A1 and B1. The maximum distance of 4 is between nodes A3 and B3.

// The minimum value in the "Maximum Distance" column is the answer: 3.


// Input
// int networkA_nodes:the number of nodes in network A

// int networkA_from[networkA_nodes - 1]:one end of the edge in network A

// int networkA_to[networkA_nodes - 1]:the other end of the edge in network A

// int networkB_nodes:the number of nodes in network B

// int networkB_from[networkB_nodes - 1]:one end of the edge in network B

// int networkB_to[networkB_nodes - 1]:the other end of the edge in network B

// 1 ≤ networkA_nodes ≤ 10^5
// 1 ≤ networkA_from[i], networkA_to[i] ≤ networkA_nodes
// 1 ≤ networkB_nodes ≤ 10^5
// 1 ≤ networkB_from[i], networkB_to[i] ≤ networkB_nodes
// STDIN                 FUNCTION
// -----                 --------
// 2 1                 networkA_nodes = 2, networkA_nodes - 1 = 1
// 1 2                 networkA_from = [1], networkA_to = [2]
// 2 1                 networkB_nodes = 2, networkB_nodes - 1 = 1
// 2 1                 networkB_from = [2], networkB_to = [1]

// Output
// int:the minimum possible maximum distance between two nodes after adding the edge as described


// Sample Input 1 

// 2 1
// 1 2
// 2 1
// 2 1
// Sample Output 1

// 3
