select max(round(lat_n, 4))
from station
where lat_n < 137.2345;
#approach 2
#Truncate simply removes the extra decimal places, 
#while round, rounds it till the decimal point mentioned
select max(Truncate(lat_n, 4))
from station
where lat_n < 137.2345;