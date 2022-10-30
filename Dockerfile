FROM ubuntu:20.04
RUN apt-get update
RUN apt-get install -y gcc
RUN apt-get install -y cmake
RUN cd ~
COPY FSE-project-group-3 /root/FSE-project-group-3
