-- Write your PostgreSQL query statement below

SELECT a1.name

FROM 
Employee AS a1
JOIN 
Employee  a2


ON
a1.id = a2.managerId
GROUP BY a1.id,a1.name
HAVING COUNT(*) >= 5

