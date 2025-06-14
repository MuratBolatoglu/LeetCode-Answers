# Write your MySQL query statement below
select round(count(case when order_date=customer_pref_delivery_date THEN 1 END) * 100 /count(*),2) as immediate_percentage
from Delivery
where (customer_id, order_date) IN (
    select customer_id, MIN(order_date)
    from delivery
    group by customer_id);