 
set term pdf
set out "sumas.pdf"
set key b r
set xlabel 'N'
set ylabel 'D%'
set log y
plot 'datos.txt'  u 1:2 w l t 'sum2',  '' u 1:3 w l t 'sum3'
