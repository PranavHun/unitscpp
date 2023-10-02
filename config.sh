if [ "$1" == "examples" ]
then
cmake -B examples/build/ examples/ -GNinja
elif [ -z $1 ]
then
cmake -B build/ . -GNinja
else
echo "Inappropriate arguments provided."
fi