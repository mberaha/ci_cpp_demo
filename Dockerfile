FROM mberaha/bayesmix-base:latest

COPY . /usr/test
WORKDIR /usr/test

RUN mkdir build && cd build && cmake .. && make test_ci_tests

CMD ["./build/test/test_ci_tests ]
