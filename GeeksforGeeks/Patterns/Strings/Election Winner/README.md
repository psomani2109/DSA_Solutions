# 📝 Election Winner (GeeksforGeeks)

🔗 [Problem Link](https://www.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1)

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen) ![Language](https://img.shields.io/badge/Language-C++-blue)

### 💡 Tags
Hash, Strings

### 🚀 Performance
- **Runtime:** Successfully Evaluated
- **Memory:** N/A

---

### 📜 Problem Description

Given an array of strings arr[] representing votes cast in an election, where each string is the name of a candidate in lowercase English letters, find the candidate who received the maximum number of votes.

If multiple candidates receive the same highest number of votes, return the lexicographically smaller candidate name along with its vote count.

**Examples :**

```
Input: arr[] = [john, johnny, jackie, johnny, john, jackie, jamie, jamie, john, johnny, jamie, johnny, john]
Output: [john, 4]
Explanation: john has 4 votes casted for him, but so does johnny. john is lexicographically smaller, so we print john and the votes he received.
```

```
Input: arr[] = [andy, blake, clark]
Output: [Andy, 1]
Explanation: All the candidates get 1 votes each. We print andy as it is lexicographically smaller.

```