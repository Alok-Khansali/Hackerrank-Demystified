--round(a,b) means round a till b decimal places
-- if the value b is not specified then the value is rounded to nearest integer
select round(avg(population))
from city;