select distinct city
from station
where (right(city, 1) not in ('a', 'e', 'u', 'i', 'o'));