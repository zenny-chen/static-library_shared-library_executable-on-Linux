# On Linux with GCC, how to implement: static-library -> shared-library -> executable
On Linux, how to make the executable link a shared library and the shared library link a static library.

<br />

## Requirements

- GCC 7.1 or above
- x86_64 system environment

<br />

## Build

```bash
sh build.sh
```

<br />

## Run the executable file

```bash
sh run.sh
```

<br />

This demo shows the steps that generate the static library, the shared library and the executable file. It also demonstrates how to compile and link the shared library in detail. The **build.sh** file shows the details.

