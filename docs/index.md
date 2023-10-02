# Units - C++
*small units of code to understand C++ better*

## Project Structure
|Directories|Description|
|---|---|
|UNITSCPP|Repository Root|
|└──units|code directory|
|&emsp;&emsp;└──{project 1}||
|&emsp;&emsp;└──{project 2}||
|&emsp;&emsp;└──&emsp;...||
|└──examples|examples directory|
|&emsp;&emsp;└──{example 1}||
|&emsp;&emsp;└──{example 2}||
|&emsp;&emsp;└──&emsp;...||
|├── include|***include*** installed here|
|├── lib|***lib*** installed here|
|├── bin|***bin*** for running examples|
|&emsp;&emsp;└──{example 1 binary}||
|&emsp;&emsp;└──{example 2 binary}||
|&emsp;&emsp;└──&emsp;...||


## Using the repository

```bash
# Download the source from github.com
$ git clone https://github.com/PranavHun/unitscpp.git


# Clean build the code or examples
$ ./build_all.sh [examples]


# Configure Cmake
$ ./config.sh [examples]

# Build the targets
$ ./build.sh [examples]

# Install the targets
$ ./install.sh [examples]

# remove the build targets
$ ./clean.sh [examples]

# test
$ ./test.sh
```
