Key idea:
If we need the area, we must think of lengths and breadths of each cake piece.
​
Assume
LENGTH as total horizontal length of the original cake.
HEIGHT as total vertical height of the original cake.
H as number of horizontal cuts. HCUTS is array of horizontal cuts.
Similarly, V as number of vertical cuts and VCUTS is an array of vertical cuts.
​
Solution
​
Lets only think of horizontal cuts. Each HCUTS[i] would create a piece with length LENGTH and height, say, heights[i].
As there are H cuts, there will be (H+1) pieces of length LENGTH.
​
Now each vertical cut VCUTS[i] will cut each of the horizontal pieces that we got in step 1.
We already know the height of each piece (step 1), now with each vertical cut, we will know the length of each piece as well.
​
Because we want the maximize the area, we must try to maximize the length and height of each piece.
​
Algorithm
​
Find heights of pieces if we only perform the horizontal cuts. Say this array is heights[].
Find lengths of pieces if we only perform the vertical cuts. Say this arrays is lengths[].
Find max of heights[] and lengths[].
Multiply those two max and take mod 10e7.
Return the answer
Is there anything that is still unclear? Let me know and I can elaborate.