FROM ubuntu:22.04
RUN apt-get update
RUN apt-get install -y gcc
RUN apt-get install -y g++

#RUN apt-get install -y cmake # installs cmake 3.16.3, which is too old
RUN apt purge --auto-remove cmake
RUN apt update && apt install -y software-properties-common lsb-release && apt clean all
RUN wget -O - https://apt.kitware.com/keys/kitware-archive-latest.asc 2>/dev/null | gpg --dearmor - | tee /etc/apt/trusted.gpg.d/kitware.gpg >/dev/null
RUN apt-key adv --keyserver keyserver.ubuntu.com --recv-keys 6AF7F09730B3F0A4
RUN apt-add-repository "deb https://apt.kitware.com/ubuntu/ $(lsb_release -cs) main"
RUN apt update
RUN apt install kitware-archive-keyring
RUN rm /etc/apt/trusted.gpg.d/kitware.gpg
RUN apt update
RUN apt install -y cmake

RUN cd ~
COPY . /root/FSE-project-group-3


