-- Write your PostgreSQL query statement below

SELECT sn.user_id,

        ROUND(AVG(CASE WHEN con.action = 'confirmed' THEN 1 ELSE 0 END),2) 
        AS
        confirmation_rate



FROM signups as sn
LEFT JOIN 
Confirmations as con

ON 
sn.user_id = con.user_id
GROUP BY sn.user_id



