FROM ubuntu:16.04

MAINTAINER "ipa320" "https://github.com/ipa320"

# Install packages
RUN apt-get update -qq \
    && apt-get -qq install -y \
        git \
        sudo \
        lsb-release \
        python-pip \
        wget \
    && apt-get clean
ENV IN_DOCKER 1
ENV TERM xterm
