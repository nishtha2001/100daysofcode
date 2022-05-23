# Write your MySQL query statement below
SELECT name as Customers FROM customers WHERE Id not in (SELECT CustomerId FROM Orders)