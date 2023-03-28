SELECT round(LONG_W,4)
FROM station
WHERE LAT_N = (SELECT MAX(LAT_N) from station WHERE LAT_N < 137.2345);