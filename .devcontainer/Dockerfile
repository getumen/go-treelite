# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.231.6/containers/go/.devcontainer/base.Dockerfile

# [Choice] Go version (use -bullseye variants on local arm64/Apple Silicon): 1, 1.16, 1.17, 1-bullseye, 1.16-bullseye, 1.17-bullseye, 1-buster, 1.16-buster, 1.17-buster
ARG VARIANT="1.18-bullseye"
FROM mcr.microsoft.com/vscode/devcontainers/go:0-${VARIANT}

# [Choice] Node.js version: none, lts/*, 16, 14, 12, 10
ARG NODE_VERSION="none"
RUN if [ "${NODE_VERSION}" != "none" ]; then su vscode -c "umask 0002 && . /usr/local/share/nvm/nvm.sh && nvm install ${NODE_VERSION} 2>&1"; fi

RUN apt-get update \
    && apt-get install -y --no-install-recommends \
    cmake \
    g++ \
    python3-pip \
    && apt-get clean -y  \
    && apt-get autoremove -y \
    && rm -rf /var/lib/apt/lists/*

ENV PATH=$PATH:/usr/local/go/bin
ENV LIBRARY_PATH=/usr/local/lib${LIBRARY_PATH:+:$LIBRARY_PATH}
ENV LD_LIBRARY_PATH=/usr/local/lib${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}

RUN cd /tmp/ && git clone https://github.com/dmlc/treelite.git -b 2.3.0 \
    && cd treelite \
    && mkdir build && cd build \
    && cmake .. \
    && make install \
    && rm -r /tmp/treelite

# [Optional] Uncomment this line to install global node packages.
# RUN su vscode -c "source /usr/local/share/nvm/nvm.sh && npm install -g <your-package-here>" 2>&1
