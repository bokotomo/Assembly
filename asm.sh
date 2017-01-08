RUNFILE=$1
OUTPUT=$2
echo $RUNFILE
as -o main.o $RUNFILE
gcc -o $OUTPUT main.o
rm ./main.o