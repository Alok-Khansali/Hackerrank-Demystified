select round(avg(salary)) - round(avg(replace(salary, 0, '')))
from employees;