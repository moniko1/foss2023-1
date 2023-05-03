#!
sum=0
start=0
end=1000
step=3
for (( i = $start ; i <= $end ; i+=$step ))
do
	sum=$(( $sum+$i ))
done
echo $i ":" $sum
