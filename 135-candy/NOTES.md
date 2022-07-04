Used greedy aproach:
​
every student should get atleast one so initially give 1 candy to every student
Now traverse left to right, whenever we get a higher rating, it should get more candy from its neighbour( left neighbour in the curr case) so give just one more candy than its left neighbour
Now another case left when its right neighbour has higher rating, traverse from right, and if we get a higher rating, give it max(curr, 1+candy of its right). max ensures that for local maxima candies shuld be high than both neighbours;