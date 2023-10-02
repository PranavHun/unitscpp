if [ "$1" == "examples" ]
then
cmake --install examples/build/
elif [ -z $1 ]
then
cmake --install build/
else
echo "Inappropriate arguments provided."
fi

