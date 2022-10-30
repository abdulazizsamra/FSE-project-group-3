# FSE-project-group-3
## Intro

## Core Algorithm
some text here

## Building the Software
To build the executable, go to project root directory 
(where the ``CMakeLists.txt`` file and ``scripts`` directory are)
and run
```
bash scripts/build.sh
```
It will make an executable named ``depth_first_search_executable`` in this directory.

## Docker
Run this from repo directory:
```shell
docker build -t test -f Dockerfile .
```
Wait for it, then run:
```shell
docker run -it test
```
And now you have all FSE-project-group-3 folder in your /root directory, so you can work with you binaries.
```shell
cd /root/FSE-project-group-3/
```

## Testing
The implemented `test_dfs.py` runs an executable that read testcases input files from `/testcase`, feed them to ``depth_first_search_executable``, and use python unittest module to compare the output with refernce files in the same directory. 
To run the tester, go to project root directory and run:
```shell
./scripts/test.sh
```
For each testcase, there is a reference file that is compared with the output to check the validity of code.
