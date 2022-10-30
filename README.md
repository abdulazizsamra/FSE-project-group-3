# FSE-project-group-3
## Intro
## Core Algorithm
some text here

## 🦋 Prerequisite
- [Docker](https://www.docker.com/ "Docker") Installed
- [Python](https://www.python.org/ "Python") Installed

 

- [GH](https://cli.github.com/ "Github CLI") Installed
## 🛠️ Installation Steps: Building the Software

1. Clone the repository

```Bash
git clone https://github.com/abdulazizsamra/FSE-project-group-3
```

2. Build the Docker Image from the Docker file

```Bash
docker build -t project_group_3 [path_to_docker_file]
```
 4 To install the libraries, go to project root directory 
(where the ``CMakeLists.txt`` file and ``scripts`` directory are)
and run
```
bash scripts/prereqs.sh
```
5 To build the executable, go to project root directory 
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
This now you have all FSE-project-group-3 folder in your /root directory, and Cmake actually makes you the executable at the start of this docker container - No need to run anything else!

## 👷 Testing
The implemented `test_dfs.py` runs an executable that read testcases input files from `/testcase`, feed them to ``depth_first_search_executable``, and use python unittest module to compare the output with refernce files in the same directory. 
To run the tester, go to project root directory and run:
```shell
./scripts/test.sh
```
For each testcase, there is a reference file that is compared with the output to check the validity of code.
