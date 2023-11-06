# Simple-Algorithm
In this template, there is a code that adds the ranges of a list that are proportioned by the user using a simple algorithm O(n). 
Also, the list is created randomly, the user provides the size. 


There are four functions that are presented here: 
- creatListInt: generates a random list using pre given functions like rand() and static_cast
- print: print every element of the list horizontally
- addSearch: the user provides the ranges of the list that desires to be added
- add: by using an O(n) notation algorithm, all of the elements of the list are added by the previous so that the proportioned ranges take the one from the right and subtract it from the left-1 value, obtaining the sum of the indexes.

Example: 
Initial random list of size 4: 
18 6 11 19

Sum of previous values list: 
18 24 35 54

Sum of ranges from 1 to 3: 
36

