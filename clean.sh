if [ "$1" == "examples" ]
then
rm -rf examples/build/
rm -rf examples/bin/
elif [ -z $1 ]
then
rm -rf build/
rm -rf include/
rm -rf lib/
rm -rf bin/
else
echo "Inappropriate arguments provided."
fi