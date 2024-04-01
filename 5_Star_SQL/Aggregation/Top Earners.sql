select max(salary * months),
    count(*)
from employee
group by salary * months desc
limit 1;