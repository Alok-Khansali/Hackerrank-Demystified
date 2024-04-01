select round(LONG_W, 4)
from station
where lat_n = (
        select min(lat_n)
        from station
        where lat_n > 38.778
    );
#approach 2
SELECT ROUND(LONG_W, 4)
FROM Station
WHERE LAT_N > 38.7780
ORDER BY LAT_N ASC
LIMIT 1;