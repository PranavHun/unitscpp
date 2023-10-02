if [ "$1" == "examples" ]
then
cmake --build examples/build/
elif [ -z $1 ]
then
cmake --build build/
else
echo "Inappropriate arguments provided."
fi