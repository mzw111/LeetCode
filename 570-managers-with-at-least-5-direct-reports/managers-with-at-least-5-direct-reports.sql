# Write your MySQL query statement below

SELECT e.name  
from Employee E
join employee m
    on e.id = m.managerId
    Group By e.id, e.name
    Having COUNT(m.id) >=5;