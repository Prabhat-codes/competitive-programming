# Competitive Programming

## About

Practice solutions I wrote while learning C++ and data structures. It is for anyone learning the same problems who wants to read beginner-level approaches. It covers problems from Codeforces, CodeChef, HackerRank and LeetCode, plus sorting algorithms and C++ basics.

**Tech stack:** C++ (with a little C and Python).

**Live site:** none. This is a code-only repository.

## Folders

| Folder | What is inside |
|---|---|
| `codeforces/` | Codeforces problems |
| `codechef/` | CodeChef problems, including the "getting started" set |
| `hackerrank/` | HackerRank C++ practice |
| `LeetCode/` | LeetCode problems: LeetCode 75, trees and data structures |
| `Final 450/` | Array problems from a 450-question practice list |
| `Sorting-Algos/` | Sorting algorithms |
| `Cherno C++/` | C++ language exercises following The Cherno's videos |
| `Padma Reddy/`, `Misc/` | Other exercises |

## Run

You need a C++ compiler such as GCC. Each `.cpp` file is separate, so compile the one you want:

```
g++ -std=c++14 codeforces/StringTask.cpp -o solution
./solution
```

On Windows PowerShell, run `.\solution.exe`. Programs read their input from the keyboard, in the format of the original problem.

LeetCode files that contain only a solution class need to be pasted into the LeetCode editor or given a `main` function.

## Quality

These are learning solutions kept mostly as written. Every C and C++ file passes a GCC syntax check, but not all of them have been tested against the original judges.
