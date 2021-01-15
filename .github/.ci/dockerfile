FROM epitechcontent/epitest-docker

LABEL maintainer="kgtrey1"

COPY ./ /tests

WORKDIR /tests

CMD ["/bin/sh", "-c", "(make tests_run && gcovr --exclude test && exit 0) || exit 1"]