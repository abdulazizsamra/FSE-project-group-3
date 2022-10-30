FROM ubuntu:20.04
RUN apt-get update
RUN apt-get isntall gcc
RUN apt-get install cmake
RUN cd ~
COPY FSE-project-group-3 ~/FSE-project-group-3
