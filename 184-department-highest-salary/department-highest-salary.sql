# Write your MySQL query statement below
SELECT D.name AS Department, E.name AS Employee, E.salary AS Salary 
FROM Employee E 
JOIN Department D
    On E.departmentId = D.id
    WHERE(E.salary) IN (
        
        SELECT MAX(E2.salary)
        FROM Employee E2
        Where E2.departmentId = D.id
);
