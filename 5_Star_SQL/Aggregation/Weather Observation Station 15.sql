select round(long_w, 4)
from station
where lat_n < 137.2345
order by lat_n desc,
    lat_n
limit 1;
#approach 2
SELECT ROUND(LONG_W, 4)
FROM Station
WHERE LAT_N = (
        SELECT MAX(LAT_N)
        FROM Station
        WHERE LAT_N < 137.2345
    );