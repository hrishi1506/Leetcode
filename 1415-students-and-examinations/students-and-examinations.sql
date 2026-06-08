-- Write your PostgreSQL query statement below

SELECT s.student_id , s.student_name , su.subject_name , count(e.student_id) AS attended_exams

FROM 

students AS s
CROSS JOIN
subjects as su
LEFT JOIN
Examinations as e

ON

s.student_id = e.student_id 
AND 
e.subject_name = su.subject_name


GROUP BY s.student_id , s.student_name , su.subject_name 
ORDER BY s.student_id, su.subject_name