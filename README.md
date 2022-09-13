# go-treelite: [TreeLite](https://github.com/dmlc/treelite) binding in Go

[![Go Report Card](https://goreportcard.com/badge/github.com/getumen/go-treelite)](https://goreportcard.com/report/github.com/getumen/go-treelite)
[![CodeQL](https://github.com/getumen/go-treelite/actions/workflows/codeql-analysis.yml/badge.svg)](https://github.com/getumen/go-treelite/actions/workflows/codeql-analysis.yml)
[![Go](https://github.com/getumen/go-treelite/actions/workflows/go.yml/badge.svg)](https://github.com/getumen/go-treelite/actions/workflows/go.yml)
[![Go.Dev reference](https://img.shields.io/badge/go.dev-reference-blue?logo=go&logoColor=white)](https://pkg.go.dev/github.com/getumen/go-treelite)

- [go-treelite: TreeLite binding in Go](#go-treelite-treelite-binding-in-go)
  - [Prerequirements](#prerequirements)
    - [install treelite](#install-treelite)
      - [1. install packages to install treelite](#1-install-packages-to-install-treelite)
      - [2. install treelite](#2-install-treelite)
  - [Usage](#usage)
  - [Documentation](#documentation)

This binding currently works for treelite 3.0.0.

## Prerequirements

### install treelite

install treelite (see [.devcontainer/Dockerfile](.devcontainer/Dockerfile))

#### 1. install packages to install treelite

the following package is installed.

- g++
- cmake
- make

#### 2. install treelite

```bash
git clone https://github.com/dmlc/treelite.git -b 3.0.0
cd treelite \
mkdir build && cd build \
cmake .. \
sudo make install \
export LIBRARY_PATH=/usr/local/lib${LIBRARY_PATH:+:$LIBRARY_PATH}
export LD_LIBRARY_PATH=/usr/local/lib${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}
```

## Usage

Add this library to your project.

```bash
go get github.com/getumen/go-treelite
```

## Documentation

The documentation is hosted at [here](https://pkg.go.dev/github.com/getumen/go-treelite). You can also take a look at [example_test.go](example_test.go).
