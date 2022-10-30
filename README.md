# FSE-project-group-3
## Intro

## Core Algorithm
some text here

## Building the Software
some text here

## Docker
Run this:
```shell
docker build -t test -f FSE-project-group-3/Dockerfile .
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
The implemented `tester.py` runs an executable that read input and output file path as arguments. For example:
```shell
./main.exe input.txt output.txt
```
For each testcase, there is a reference file that is compared with the output to check the validity of code.
