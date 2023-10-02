if [ $1 == "examples" ] || [ -z $1 ]
then
./clean.sh $1
./config.sh $1
./build.sh $1
./install.sh $1
else
echo "Inappropriate arguments provided."
fi