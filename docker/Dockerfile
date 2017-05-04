# the base for the docker file, in this case the container will be a Debian machine
# check readme to see instructions on build and run
FROM debian:latest

# the on who wrotes this awesome Dockerfile
MAINTAINER Pedro Henrique

#set apt-get ready to use and installs git and gcc
RUN apt-get update
RUN apt-get -y install git
RUN apt-get -y install gcc

#run bash
CMD ["bash"]