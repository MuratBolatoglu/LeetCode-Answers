select product_name,sum(o.unit) as unit
from Orders o join Products p on o.product_id= p.product_id
where Month(o.order_date)=02 and Year(o.order_date)=2020
group by product_name
having sum(o.unit)>=100