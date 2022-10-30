FROM ubuntu:20.04
RUN apt-get update
RUN apt-get install -y gcc
RUN apt-get install -y cmake
RUN cd ~
COPY . /root/FSE-project-group-3
WORKDIR /root/FSE-project-group-3

