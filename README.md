# FSE-project-group-3
## Intro
 
- Aleksandr Odnakov
- Marco Offidani
- Anastasiia Prutianova
- Abdulaziz Samra
- Mikhail Seleznyov
- Polina Tarantsova
 

## Core Algorithm: Depth First Search
 
Depth first search is a tree-based graph traversal algorithm that is used to search a graph. A DFS algorithm traverses a tree or graph from the parent vertex down to its
children and grandchildren vertices in a single path until it reaches a dead end.
When there are no more vertices to visit in a path, the DFS algorithm will backtrack to a point where it can choose another path to take. It will repeat the process over and
over until all vertices have been visited.
When checking and updating each vertex, there are three things that a DFS algorithm has to do:
- Read the current node as visited
- Scroll through the list of children
- For every child, check the child


This process is repeated recursively, so when a node with no children is reached the subprocess will close and and his father process will open a subproces with the next child.

## 🦋 Prerequisite
- [Docker](https://www.docker.com/ "Docker") Installed
- [Python](https://www.python.org/ "Python") Installed

 

- [GH](https://cli.github.com/ "Github CLI") Installed
## 🚀  Quickstart: Building the Software



.



./depth_first_seach_executable
1. Clone the repository

```Bash
git clone https://github.com/abdulazizsamra/FSE-project-group-3
```
2. Change the directory 

```Bash
cd FSE-project-group-3/
```
3. Build the Docker Image from the Docker file

```Bash
docker build -t project -f Dockerfile 
```
4. Build the executable
```
bash docker run -it project
```
It will make an executable named ``depth_first_search_executable`` in this directory.

5. Run the newly created executable
```
bash ./depth_first_search_executable
```

6. Run the test
```
bash scripts/test.sh
```
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
The implemented `test_dfs.py` runs a python executable that read testcases input files from `/testcase`, feed them to ``depth_first_search_executable``, and use python unittest module to compare the computed output with the theretically expected output contained in the refernce files in the same directory. 
To run the tester, go to project root directory and run:
```shell
./scripts/test.sh
```
For each testcase, there is a reference file that is compared with the output to check the validity of code.

## 🛠️ Editing the project: workflow manager
After editing any file, run the workflow manager
The workflow manager will
- Read checkout the full repository
- Use the provided Dockerfile to build an image
- Run the image
- Run the builder
- Run the tester 
              
