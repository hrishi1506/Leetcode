-- Write your PostgreSQL query statement below

select pd.product_name , s.year , s.price
from 
sales as s
join product as pd
on 
s.product_id = pd.product_id
