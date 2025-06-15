WITH ms AS (SELECT MAX(salary) AS salary FROM Employee)
SELECT MAX(salary) AS SecondHighestSalary
FROM Employee
WHERE salary < (SELECT salary FROM ms);
