# Use -e BOT_TOKEN="Bot exampletoken" as an environment variable when running
FROM ubuntu:20.04 AS build
ENV DEBIAN_FRONTEND=noninteractive
RUN apt update && apt install -y \
    libboost-all-dev \
    cmake \
    build-essential \
    libssl-dev \
&& rm -rf /var/lib/apt/lists/*
WORKDIR /aidobot-2
COPY . .
RUN mkdir build && cd build && cmake .. && make

FROM alpine:latest
RUN apk --no-cache add libgcc libstdc++ libc6-compat
WORKDIR /aidobot-2
COPY --from=build /aidobot-2/build/aidobot-2 .
CMD ["./aidobot-2"]
