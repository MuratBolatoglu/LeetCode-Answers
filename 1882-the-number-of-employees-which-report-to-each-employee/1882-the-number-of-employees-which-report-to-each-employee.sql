# Write your MySQL query statement below
select s.employee_id,s.name,count(*) as reports_count, round(sum(e.age)/count(*)) as average_age
from Employees as s join Employees as e on s.employee_id = e.reports_to
group by employee_id
order by s.employee_id