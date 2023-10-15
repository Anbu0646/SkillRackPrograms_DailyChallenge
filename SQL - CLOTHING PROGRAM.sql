/*
A table called clothing is created with the following DDL command: 

CREATE TABLE clothing (id INT, name VARCHAR(30), publishedyear INT, price FLOAT); 

Write the SQL query to select name, publishedyear and price from the table clothing where the publishedyear is greater than 2010. 

Note: The publishedyear of the clothings must be sorted in descending order.

SOLUTION:
*/

 SELECT name, publishedyear, price
 FROM clothing
 WHERE publishedyear > 2010
 ORDER BY publishedyear DESC;
