select distinct city from station where substring(city, length(city), length(city)) in ('a','i', 'e', 'o','u', 'A', 'E', 'I', 'O', 'U');